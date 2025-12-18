#include <vector>
#include "../Classes/ItemVenda.cpp"

using namespace std;

class ItemVendaDAO {
    private:
        vector<ItemVenda> itemVendas;

    public:
        // CREATE
        void criar(ItemVenda itemVenda) {
            itemVendas.push_back(itemVenda);
        }

        // READ
        ItemVenda *recuperar(int id) {
            for (auto &iv : itemVendas) {
                if (iv.getIdItemVenda() == id) {
                    return &iv;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(ItemVenda itemVendaAtualizado) {
            for (auto &iv : itemVendas) {
                if (iv.getIdItemVenda() == itemVendaAtualizado.getIdItemVenda()) {
                    iv = itemVendaAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int id) {
            for (auto it = itemVendas.begin(); it != itemVendas.end(); ++it) {
                if (it->getIdItemVenda() == id) {
                    itemVendas.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<ItemVenda> listar() {
            return itemVendas;
        }
};