#include "dominio/Cliente.h"

Cliente::Cliente(int id, const std::string &nome)
    : id_(id), nome_(nome) {}

int Cliente::getId() const
{
    return id_;
}

const std::string &Cliente::getNome() const
{
    return nome_;
}
