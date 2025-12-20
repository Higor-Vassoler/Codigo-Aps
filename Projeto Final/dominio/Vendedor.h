#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>

class Vendedor
{
private:
    std::string nome_;

public:
    explicit Vendedor(const std::string &nome);
    const std::string &getNome() const;
};

inline const std::string &Vendedor::getNome() const
{
    return nome_;
}

#endif
