using namespace std;

class Desconto{
    private:
        int id;
        double valor;
    
    public:
        Desconto() = default;

        Desconto(int id, double valor){
            this -> id = id;
            this -> valor = valor;
        }
        
        int getIdDesconto(){
            return id;
        }

        void setIdDesconto(int id){
            this -> id = id;
        }

        double getValor(){
            return valor;
        }

        void setValor(double valor){
            this -> valor = valor;
        }
};