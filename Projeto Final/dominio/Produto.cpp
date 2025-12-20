#include "dominio/Produto.h"

Produto::Produto(int id, const std::string &nome, bool disponivel, int quantidade)
    : id_(id), nome_(nome), disponivel_(disponivel), quantidade_(quantidade) {}

int Produto::getId() const
{
    return id_;
}

const std::string &Produto::getNome() const
{
    return nome_;
}

bool Produto::estaDisponivel() const
{
    return disponivel_;
}

int Produto::getQuantidade() const
{
    return quantidade_;
}

void Produto::setQuantidade(int quantidade)
{
    quantidade_ = quantidade;
}
