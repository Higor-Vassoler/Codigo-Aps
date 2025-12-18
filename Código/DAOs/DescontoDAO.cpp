#include <vector>
#include "../Classes/Desconto.cpp"

using namespace std;

class DescontoDAO {
    private:
        vector<Desconto> descontos;

    public:
        // CREATE
        void criar(Desconto desconto) {
            descontos.push_back(desconto);
        }

        // READ
        Desconto *recuperar(int id) {
            for (auto &d : descontos) {
                if (d.getIdDesconto() == id) {
                    return &d;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(Desconto descontoAtualizado) {
            for (auto &d : descontos) {
                if (d.getIdDesconto() == descontoAtualizado.getIdDesconto()) {
                    d = descontoAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int id) {
            for (auto it = descontos.begin(); it != descontos.end(); ++it) {
                if (it->getIdDesconto() == id) {
                    descontos.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Desconto> listar() {
            return descontos;
        }
};