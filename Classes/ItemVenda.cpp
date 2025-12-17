using namespace std;

class ItemVenda{
    private:
        unsigned int quantidade;
        double preco;
        double subtotal;
        double valorDesconto;
        double custo;
        double lucro;

    public:
        ItemVenda() = default;

        ItemVenda(unsigned int quantidade, double preco, double subtotal, double valorDeconto, double custo, double lucro){
            this -> quantidade = quantidade;
            this -> preco = preco;
            this -> subtotal = subtotal;
            this -> valorDesconto = valorDesconto;
            this -> custo = custo;
            this -> lucro = lucro;
        }

        unsigned int getQuantidade(){
            return quantidade;
        }

        void setQuantidade(unsigned int quantidade){
            this -> quantidade = quantidade;
        }

        double getPreco(){
            return preco;
        }

        void setPreco(double preco){
            this -> preco = preco;
        }

        double getSubtotal(){
            return subtotal;
        }

        void setSubtotal(double subtotal){
            this -> subtotal = subtotal;
        }

        double getValorDesconto(){
            return valorDesconto;
        }

        void setValorDesconto(double valorDesconto){
            this -> valorDesconto = valorDesconto;
        }

        double getCusto(){
            return custo;
        }

        void setCusto(double custo){
            this -> custo = custo;
        }

        double getLucro(){
            return lucro;
        }

        void setLucro(double lucro){
            this -> lucro = lucro;
        }
};