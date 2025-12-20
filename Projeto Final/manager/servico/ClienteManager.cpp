#include "manager/servico/ClienteManager.h"
#include "infra/DaoManager.h"
#include "dominio/Reserva.h"
#include <iostream>

void ClienteManager::listarClientesReserva(int idCliente, const std::string &nome)
{
    auto clienteDao = DaoManager::getClienteDao();
    auto reservaDao = DaoManager::getReservaDao();

    auto clientes = clienteDao->listarClientes(nome);

    std::cout << "Clientes encontrados:\n";
    for (const auto &c : clientes)
    {
        std::cout << "- " << c.getNome() << "\n";
    }

    Cliente cliente = clienteDao->recuperar(idCliente);

    Reserva reserva;
    reserva.setStatus("aberta");
    reserva.setCliente(cliente);

    reservaDao->atualizar(reserva);
}
