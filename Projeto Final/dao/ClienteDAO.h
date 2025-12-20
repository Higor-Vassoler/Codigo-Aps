#ifndef CLIENTEDAO_H
#define CLIENTEDAO_H

#include <vector>
#include "dominio/Cliente.h"

class ClienteDAO
{
public:
    std::vector<Cliente> listarClientes(const std::string &nome) const;
    Cliente recuperar(int idCliente) const;
};

#endif
