#include "manager/servico/ReservaManager.h"
#include "infra/DaoManager.h"
#include <iostream>
#include <ctime>

void ReservaManager::inserirDataRetirada(const std::string &dataReserva,
                                         const std::string &dataRetirada)
{
    auto reservaDao = DaoManager::getReservaDao();

    Reserva reserva = reservaDao->recuperarReservaAberta();

    reserva.setDataReserva(dataReserva);
    reserva.setDataRetirada(dataRetirada);

    reservaDao->atualizar(reserva);

    std::cout << "Data de retirada registrada com sucesso.\n";
}

void ReservaManager::reservar(int idProduto)
{
    auto reservaDao = DaoManager::getReservaDao();

    Reserva reserva = reservaDao->recuperarReservaAberta();

    std::time_t agora = std::time(nullptr);
    reserva.setDataTermino(agora);

    reserva.fechar();

    reservaDao->atualizar(reserva);

    std::cout << "Reserva confirmada e registrada com sucesso.\n";
}
