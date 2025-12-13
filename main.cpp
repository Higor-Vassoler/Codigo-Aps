#include <iostream>
#include "MANAGERs\ClienteManager.cpp"


int cadastroCliente(){
    DaoManager daoManager;
    ClienteManager clienteManager(daoManager);

    int id;
    int telefone;
    std::string nome;

    std::cout << "Insira o ID: ";
    std::cin >> id;

    std::cin.ignore();
    std::cout << "Insira o nome da pessoa: ";
    std::getline(std::cin, nome);

    std::cout << "Insira o telefone: ";
    std::cin >> telefone;

    Cliente c(id, nome, telefone);

    Cliente *cli = clienteManager.buscarCliente(id);

    clienteManager.cadastrarCliente(c);
    if(cli){
        std::cout << "Cliente Cadastrado!" << std::endl;
    }
}

void intro(){
    std::cout << "|======================================================================|" << std::endl;
    std::cout << "| ███████        ███    ███  ██████  ██    ██ ██████   █████   ██████  |" << std::endl;
    std::cout << "| ██             ████  ████ ██    ██ ██    ██ ██   ██ ██   ██ ██    ██ |" << std::endl;
    std::cout << "| ███████        ██ ████ ██ ██    ██ ██    ██ ██████  ███████ ██    ██ |" << std::endl;
    std::cout << "|      ██        ██  ██  ██ ██    ██ ██    ██ ██   ██ ██   ██ ██    ██ |" << std::endl;
    std::cout << "| ███████ ██     ██      ██  ██████   ██████  ██   ██ ██   ██  ██████  |" << std::endl;
    std::cout << "|======================================================================|" << std::endl;
}

int main(){
    intro();
    //std::cout << "Insira a opcao." << std::endl;

    return 0;
}