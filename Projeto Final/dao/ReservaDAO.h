#ifndef RESERVADAO_H
#define RESERVADAO_H

#include "dominio/Reserva.h"

class ReservaDAO
{
public:
    Reserva recuperarReservaAberta(); 
    void atualizar(const Reserva &reserva);
};

#endif
