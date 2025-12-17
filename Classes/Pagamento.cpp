#include "enum/FormatoPagamento.cpp"

using namespace std;

class Pagamento{
    private:
        double valor;
        int data;
        int parcelas;
        FormatoPagamento formato;
    
    public:
        Pagamento() = default;

        Pagamento(double valor, int data, int parcelas, FormatoPagamento formato){
            this -> valor = valor;
            this -> data = data;
            this -> parcelas = parcelas;
            this -> formato = formato;
        }

        double getValor(){
            return valor;
        }

        void setValor(double valor){
            this -> valor = valor;
        }

        int getData(){
            return data;
        }

        void setData(int data){
            this -> data = data;
        }

        int getParcelas(){
            return parcelas;
        }

        void setParcelas(int parcelas){
            this -> parcelas = parcelas;
        }

        FormatoPagamento getFormatoPagamento(){
            return formato;
        }

        void setFormatoPagamento(FormatoPagamento formato){
            this -> formato = formato;
        }
};