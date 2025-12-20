#ifndef TIPOMETRICA_H
#define TIPOMETRICA_H

#include <string>
#include <ctime>
#include "dominio/Vendedor.h"

class TipoMetrica
{
private:
    std::string nome_;
    std::string status_;
    std::time_t dataHoraGeracao_;
    std::string valoresCalculados_;
    const Vendedor *vendedor_;

public:
    explicit TipoMetrica(const std::string &nome);

    void abrir();
    void fechar();

    void registrarDataHora();
    void registrarValores(const std::string &valores);
    void associarVendedor(const Vendedor &vendedor);

    const std::string &getNome() const;
    const std::string &getStatus() const;
};

#endif
