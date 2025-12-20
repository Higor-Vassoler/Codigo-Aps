#ifndef SISTEMA_H
#define SISTEMA_H

#include "dominio/TipoMetrica.h"
#include "dominio/OpcaoRelatorio.h"

class Sistema
{
public:
    void gerarEstatisticasVendas();

private:
    void listarTipoMetricas() const;
    OpcaoRelatorio listarOpcoesRelatorioMetricas(const TipoMetrica &tipoMetrica) const;
    void gerarRelatorioMetrica(TipoMetrica &tipoMetrica);
};

#endif
