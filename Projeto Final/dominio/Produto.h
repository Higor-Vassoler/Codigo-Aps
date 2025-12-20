#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto
{
private:
    int id_;
    std::string nome_;
    bool disponivel_;
    int quantidade_;

public:
    Produto(int id, const std::string &nome, bool disponivel, int quantidade = 0);

    int getId() const;
    const std::string &getNome() const;
    bool estaDisponivel() const;
    int getQuantidade() const;

    void setQuantidade(int quantidade);
};

#endif
