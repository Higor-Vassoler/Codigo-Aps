#include "dao/ProdutoDAO.h"
#include <iostream>

std::vector<Produto> ProdutoDAO::listarProdutos(const std::string &nome) const
{
    return {
        Produto(1, nome, true, 0),
        Produto(2, nome + " Premium", true, 0)};
}

Produto ProdutoDAO::recuperar(int idProduto) const
{
    return Produto(idProduto, "Produto Exemplo", true, 0);
}

void ProdutoDAO::atualizar(const Produto &produto)
{
    std::cout << "Produto atualizado. Nova quantidade: "
              << produto.getQuantidade() << "\n";
}
