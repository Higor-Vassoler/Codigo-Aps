#ifndef PRODUTODAO_H
#define PRODUTODAO_H

#include <vector>
#include "dominio/Produto.h"

class ProdutoDAO
{
public:
    std::vector<Produto> listarProdutos(const std::string &nome) const;
    Produto recuperar(int idProduto) const;
    void atualizar(const Produto &produto);
};

#endif
