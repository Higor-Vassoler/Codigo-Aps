#include <string>

class Vendedor{
    private:
        int idVendedor;
        std::string nomeUsuario;
        std::string email;
        std::string senha;
    
    public:
        Vendedor() = default;

        Vendedor(int idVendedor, std::string nomeUsuario, std::string email, std::string senha){
            this -> idVendedor = idVendedor;
            this -> nomeUsuario = nomeUsuario;
            this -> email = email;
            this -> senha = senha;
        }

        int getIdVendedor(){
            return idVendedor;
        }
        void setIdVendedor(int idVendedor){
            this -> idVendedor = idVendedor;
        }

        std::string getNomeUsuario(){
            return nomeUsuario;
        }
        void setNomeUsuario(std::string nomeUsuario){
            this -> nomeUsuario = nomeUsuario;
        }

        std::string getEmail(){
            return email;
        }
        void setEmail(std::string email){
            this -> email = email;
        }

        std::string getSenha(){
            return email;
        }
        void setSenha(std::string senha){
            this -> senha = senha;
        }
};