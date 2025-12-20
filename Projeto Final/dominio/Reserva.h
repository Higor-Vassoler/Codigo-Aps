#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include <ctime> 
#include "dominio/Cliente.h"
#include "dominio/Produto.h"

class Reserva
{
private:
    std::string status_;
    const Cliente *cliente_;
    const Produto *produto_;
    std::string dataReserva_;
    std::string dataRetirada_;
    std::time_t dataTermino_;

public:
    Reserva();

    void setStatus(const std::string &status);
    void setCliente(const Cliente &cliente);
    void setProduto(const Produto &produto);

    void setDataReserva(const std::string &dataReserva);
    void setDataRetirada(const std::string &dataRetirada);

    const std::string &getDataRetirada() const;

    void fechar();
    void setDataTermino(std::time_t dataHora);
};

#endif
