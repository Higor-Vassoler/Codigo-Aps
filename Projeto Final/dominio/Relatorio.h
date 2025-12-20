#ifndef RELATORIO_H
#define RELATORIO_H

#include <string>

class Relatorio
{
private:
    std::string conteudo_;

public:
    explicit Relatorio(const std::string &conteudo);
    const std::string &getConteudo() const;
};

#endif
