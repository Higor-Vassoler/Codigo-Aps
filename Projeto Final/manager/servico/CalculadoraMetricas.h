#ifndef CALCULADORAMETRICAS_H
#define CALCULADORAMETRICAS_H

#include <string>
#include "dominio/TipoMetrica.h"

class CalculadoraMetricas
{
public:
    static std::string calcular(const TipoMetrica &tipoMetrica);
};

#endif
