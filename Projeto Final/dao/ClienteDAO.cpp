#include "dao/ClienteDAO.h"

std::vector<Cliente> ClienteDAO::listarClientes(const std::string &nome) const
{
    return {
        Cliente(1, nome),
        Cliente(2, nome + " Silva")};
}

Cliente ClienteDAO::recuperar(int idCliente) const
{
    return Cliente(idCliente, "Cliente Exemplo");
}
