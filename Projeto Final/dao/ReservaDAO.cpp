#include "dao/ReservaDAO.h"

Reserva ReservaDAO::recuperarReservaAberta()
{
    Reserva reserva;
    reserva.setStatus("aberta");
    return reserva;
}

void ReservaDAO::atualizar(const Reserva &reserva)
{
}
