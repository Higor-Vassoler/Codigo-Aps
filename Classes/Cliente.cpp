#include<string>

class Cliente{
    private:
        int id;
        std::string nome;
        int telefone;
    
    public:
        Cliente() = default; // Constructor Base

        Cliente(int id, std::string nome, int telefone){
            this -> id = id;
            this -> nome = nome;
            this -> telefone = telefone;
        }
        
        std::string getNome(){
            return nome;
        }
        void setNome(std::string nome){
            this -> nome = nome;
        }

        int getIdCliente(){
            return id;
        }
        void setIdCliente(int id){
            this -> id = id;
        }

        int getTelefoneCliente(){
            return telefone;
        }
        void setTelefoneCliente(int telefone){
            this -> telefone = telefone;
        }
};