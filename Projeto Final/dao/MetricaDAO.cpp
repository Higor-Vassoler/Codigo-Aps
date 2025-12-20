#include "dao/MetricaDAO.h"

MetricaDAO::MetricaDAO()
{
    metricasDisponiveis_.emplace_back("Produtos mais vendidos");
    metricasDisponiveis_.emplace_back("Média de vendas");
    metricasDisponiveis_.emplace_back("Moda de vendas");
    metricasDisponiveis_.emplace_back("Variância de produtos");
}

const std::vector<TipoMetrica> &MetricaDAO::listarTipoMetricas() const
{
    return metricasDisponiveis_;
}
