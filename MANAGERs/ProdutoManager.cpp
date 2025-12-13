#include "MANAGERs\DaoManager.cpp"

class ProdutoManager {
private:
    DaoManager &daoManager;

public:
    ProdutoManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarProduto(Produto produto) {
        ProdutoDAO &dao = daoManager.getProdutoDAO();
        
        if (dao.findById(produto.getIdProduto()) != nullptr) {
            return false;
        }

        dao.create(produto);
        return true;
    }

    bool removerProduto(int idProduto) {
        ClienteDAO &dao = daoManager.getClienteDAO();

        // só remove se existir
        if (dao.findById(idProduto) == nullptr) {
            return false;
        }

        return dao.remove(idProduto);
    }

    Produto *buscarProduto(int idProduto) {
        return daoManager.getProdutoDAO().findById(idProduto);
    }
};