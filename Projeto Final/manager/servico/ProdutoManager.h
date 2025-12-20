#ifndef PRODUTOMANAGER_H
#define PRODUTOMANAGER_H

#include <string> 

class ProdutoManager
{
public:
    void listarProdutosReserva(int idProduto, const std::string &nome);
    void inserirQuantidadeProdutoReserva(int idProduto, int quantidade);
};

#endif
