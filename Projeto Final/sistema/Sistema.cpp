#include "sistema/Sistema.h"
#include <iostream>

void Sistema::gerarEstatisticasVendas()
{
    bool continuar = true;

    while (continuar)
    {
        listarTipoMetricas();

        TipoMetrica metrica("Produtos mais vendidos");
        metrica.abrir();

        bool metricaEmAndamento = true;

        while (metricaEmAndamento)
        {
            OpcaoRelatorio opcao = listarOpcoesRelatorioMetricas(metrica);

            switch (opcao)
            {
            case OpcaoRelatorio::VisualizarGrafico:
                std::cout << "Visualizando gráfico...\n";
                break;

            case OpcaoRelatorio::AdicionarMetrica:
                metricaEmAndamento = false; 
                break;

            case OpcaoRelatorio::ConfirmarMetrica:
                gerarRelatorioMetrica(metrica);
                continuar = false;
                metricaEmAndamento = false;
                break;

            case OpcaoRelatorio::CancelarMetrica:
                std::cout << "Métrica cancelada.\n";
                metricaEmAndamento = false;
                break;
            }
        }
    }
}

void Sistema::listarTipoMetricas() const
{
    std::cout << "Tipos de métricas disponíveis:\n";
    std::cout << "- Produtos mais vendidos\n";
    std::cout << "- Média de vendas\n";
    std::cout << "- Moda de vendas\n";
    std::cout << "- Variância de produtos\n";
}

OpcaoRelatorio Sistema::listarOpcoesRelatorioMetricas(const TipoMetrica &) const
{
    std::cout << "Opções:\n";
    std::cout << "1 - Visualizar gráfico\n";
    std::cout << "2 - Adicionar métrica\n";
    std::cout << "3 - Confirmar métrica\n";
    std::cout << "4 - Cancelar métrica\n";

    return OpcaoRelatorio::ConfirmarMetrica;
}

void Sistema::gerarRelatorioMetrica(TipoMetrica &tipoMetrica)
{
    tipoMetrica.registrarDataHora();
    tipoMetrica.fechar();

    std::cout << "Relatório estatístico gerado com sucesso.\n";
}
