#include "dominio/TipoMetrica.h"
#include <ctime>

TipoMetrica::TipoMetrica(const std::string &nome)
    : nome_(nome),
      status_("fechada"),
      dataHoraGeracao_(0),
      vendedor_(nullptr) {}

void TipoMetrica::abrir()
{
    status_ = "aberta";
}

void TipoMetrica::fechar()
{
    status_ = "fechada";
}

void TipoMetrica::registrarDataHora()
{
    dataHoraGeracao_ = std::time(nullptr);
}

void TipoMetrica::registrarValores(const std::string &valores)
{
    valoresCalculados_ = valores;
}

void TipoMetrica::associarVendedor(const Vendedor &vendedor)
{
    vendedor_ = &vendedor;
}

const std::string &TipoMetrica::getNome() const
{
    return nome_;
}

const std::string &TipoMetrica::getStatus() const
{
    return status_;
}
