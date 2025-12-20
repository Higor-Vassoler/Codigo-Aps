#ifndef DAOMANAGER_H
#define DAOMANAGER_H

#include <memory>

#include "dao/MetricaDAO.h"

#include "dao/ClienteDAO.h"
#include "dao/ProdutoDAO.h"
#include "dao/ReservaDAO.h"

class DaoManager
{
public:
    static std::shared_ptr<MetricaDAO> criarMetricaDAO();

    static std::shared_ptr<ClienteDAO> getClienteDao();
    static std::shared_ptr<ProdutoDAO> getProdutoDao();
    static std::shared_ptr<ReservaDAO> getReservaDao();
};

#endif
