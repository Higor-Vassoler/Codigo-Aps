#ifndef RESERVAMANAGER_H
#define RESERVAMANAGER_H

#include <string>

class ReservaManager
{
public:
    void inserirDataRetirada(const std::string &dataReserva,
                             const std::string &dataRetirada);

    void reservar(int idProduto); 
};

#endif
