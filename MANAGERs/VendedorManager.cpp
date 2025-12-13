#include "MANAGERs\DaoManager.cpp"

class VendedorManager {
private:
    DaoManager &daoManager;

public:
    VendedorManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarVendedor(Vendedor vendedor) {
        VendedorDAO &dao = daoManager.getVendedorDAO();
        
        if (dao.findById(vendedor.getIdVendedor()) != nullptr) {
            return false;
        }

        dao.create(vendedor);
        return true;
    }

    bool removerVendedor(int idVendedor) {
        VendedorDAO &dao = daoManager.getVendedorDAO();

        // só remove se existir
        if (dao.findById(idVendedor) == nullptr) {
            return false;
        }

        return dao.remove(idVendedor);
    }

    Vendedor *buscarCliente(int idVendedor) {
        return daoManager.getVendedorDAO().findById(idVendedor);
    }
};