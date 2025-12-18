#include <vector>
#include "../Classes/Venda.cpp"

using namespace std;

class VendaDAO {
    private:
        vector<Venda> vendas;

    public:
        // CREATE
        void criar(Venda venda) {
            vendas.push_back(venda);
        }

        // READ
        Venda *recuperar(int id) {
            for (auto &ve : vendas) {
                if (ve.getIdVenda() == id) {
                    return &ve;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(Venda vendaAtualizado) {
            for (auto &ve : vendas) {
                if (ve.getIdVenda() == vendaAtualizado.getIdVenda()) {
                    ve = vendaAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int id) {
            for (auto it = vendas.begin(); it != vendas.end(); ++it) {
                if (it->getIdVenda() == id) {
                    vendas.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Venda> listar() {
            return vendas;
        }
};