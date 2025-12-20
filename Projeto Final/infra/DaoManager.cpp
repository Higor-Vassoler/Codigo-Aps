#include "infra/DaoManager.h"

std::shared_ptr<MetricaDAO> DaoManager::criarMetricaDAO()
{
    static std::shared_ptr<MetricaDAO> instancia =
        std::make_shared<MetricaDAO>();
    return instancia;
}

std::shared_ptr<ClienteDAO> DaoManager::getClienteDao()
{
    static std::shared_ptr<ClienteDAO> instancia =
        std::make_shared<ClienteDAO>();
    return instancia;
}

std::shared_ptr<ProdutoDAO> DaoManager::getProdutoDao()
{
    static std::shared_ptr<ProdutoDAO> instancia =
        std::make_shared<ProdutoDAO>();
    return instancia;
}

std::shared_ptr<ReservaDAO> DaoManager::getReservaDao()
{
    static std::shared_ptr<ReservaDAO> instancia =
        std::make_shared<ReservaDAO>();
    return instancia;
}
