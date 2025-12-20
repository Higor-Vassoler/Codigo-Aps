#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
private:
    int id_;
    std::string nome_;

public:
    Cliente(int id, const std::string &nome);

    int getId() const;
    const std::string &getNome() const;
};

#endif
