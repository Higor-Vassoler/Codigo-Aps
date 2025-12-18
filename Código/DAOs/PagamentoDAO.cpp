#include <vector>
#include "../Classes/Pagamento.cpp"

using namespace std;

class PagamentoDAO {
    private:
        vector<Pagamento> pagamentos;

    public:
        // CREATE
        void criar(Pagamento pagamento) {
            pagamentos.push_back(pagamento);
        }

        // READ
        Pagamento *recuperar(int id) {
            for (auto &p : pagamentos) {
                if (p.getIdPagamento() == id) {
                    return &p;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(Pagamento pagamentoAtualizado) {
            for (auto &p : pagamentos) {
                if (p.getIdPagamento() == pagamentoAtualizado.getIdPagamento()) {
                    p = pagamentoAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int id) {
            for (auto it = pagamentos.begin(); it != pagamentos.end(); ++it) {
                if (it->getIdPagamento() == id) {
                    pagamentos.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Pagamento> listar() {
            return pagamentos;
        }
};