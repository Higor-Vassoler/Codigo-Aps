#include "dominio/Reserva.h"
#include <ctime>

Reserva::Reserva()
    : status_("fechada"),
      cliente_(nullptr),
      produto_(nullptr) {}

void Reserva::setStatus(const std::string &status)
{
    status_ = status;
}

void Reserva::setCliente(const Cliente &cliente)
{
    cliente_ = &cliente;
}

void Reserva::setProduto(const Produto &produto)
{
    produto_ = &produto;
}

void Reserva::setDataReserva(const std::string &dataReserva)
{
    dataReserva_ = dataReserva;
}

void Reserva::setDataRetirada(const std::string &dataRetirada)
{
    dataRetirada_ = dataRetirada;
}

const std::string &Reserva::getDataRetirada() const
{
    return dataRetirada_;
}

void Reserva::fechar()
{
    status_ = "fechada";
}

void Reserva::setDataTermino(std::time_t dataHora)
{
    dataTermino_ = dataHora;
}
