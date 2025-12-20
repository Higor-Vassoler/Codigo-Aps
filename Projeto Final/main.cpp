#include "sistema/Sistema.h"
#include "manager/servico/ClienteManager.h"
#include "manager/servico/ProdutoManager.h"
#include "manager/servico/ReservaManager.h"

int main()
{
    Sistema sistema;

    ClienteManager clienteManager;
    ProdutoManager produtoManager;
    ReservaManager reservaManager;

    clienteManager.listarClientesReserva(1, "João");

    produtoManager.listarProdutosReserva(10, "Natural Essencial Unico");
    produtoManager.inserirQuantidadeProdutoReserva(10, 2);

    reservaManager.inserirDataRetirada("2025-01-10", "2025-01-15");

    sistema.gerarEstatisticasVendas();

    return 0;
}
