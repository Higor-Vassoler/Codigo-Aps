#include "manager/servico/ProdutoManager.h"
#include "infra/DaoManager.h"
#include <iostream>

void ProdutoManager::listarProdutosReserva(int idProduto, const std::string &nome)
{
    auto produtoDao = DaoManager::getProdutoDao();
    auto reservaDao = DaoManager::getReservaDao();

    auto produtos = produtoDao->listarProdutos(nome);

    std::cout << "Produtos encontrados:\n";
    for (const auto &p : produtos)
    {
        std::cout << "- " << p.getNome() << "\n";
    }

    Produto produto = produtoDao->recuperar(idProduto);

    if (!produto.estaDisponivel())
    {
        std::cout << "Produto indisponível.\n";
        return;
    }

    Reserva reserva = reservaDao->recuperarReservaAberta();
    reserva.setProduto(produto);

    reservaDao->atualizar(reserva);
}

void ProdutoManager::inserirQuantidadeProdutoReserva(int idProduto, int quantidade)
{
    auto produtoDao = DaoManager::getProdutoDao();

    Produto produto = produtoDao->recuperar(idProduto);

    produto.setQuantidade(quantidade);

    produtoDao->atualizar(produto);

    std::cout << "Quantidade atual do produto: "
              << produto.getQuantidade() << "\n";
}
