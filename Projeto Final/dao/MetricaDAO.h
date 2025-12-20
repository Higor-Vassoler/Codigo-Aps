#ifndef METRICADAO_H
#define METRICADAO_H

#include <vector>
#include "dominio/TipoMetrica.h"

class MetricaDAO
{
private:
    std::vector<TipoMetrica> metricasDisponiveis_;

public:
    MetricaDAO();
    const std::vector<TipoMetrica> &listarTipoMetricas() const;
};

#endif
