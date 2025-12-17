using namespace std;

class Desconto{
    private:
        double valor;
    
    public:
        Desconto() = default;

        Desconto(double valor){
            this -> valor = valor;
        }
        
        double getValor(){
            return valor;
        }

        void setValor(double valor){
            this -> valor = valor;
        }
};