#include "DaoManager.cpp"

class ClienteManager {
private:
    DaoManager &daoManager;

public:
    ClienteManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarCliente(Cliente cliente) {
        ClienteDAO &dao = daoManager.getClienteDAO();
        
        if (dao.findById(cliente.getIdCliente()) != nullptr) {
            return false;
        }

        dao.create(cliente);
        return true;
    }

    bool removerCliente(int id) {
        ClienteDAO &dao = daoManager.getClienteDAO();

        // só remove se existir
        if (dao.findById(id) == nullptr) {
            return false;
        }

        return dao.remove(id);
    }

    Cliente *buscarCliente(int id) {
        return daoManager.getClienteDAO().findById(id);
    }
};