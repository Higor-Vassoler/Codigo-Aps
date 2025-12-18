#include <vector>
#include "../Classes/Reserva.cpp"

using namespace std;

class ReservaDAO {
    private:
        vector<Reserva> reservas;

    public:
        // CREATE
        void criar(Reserva reserva) {
            reservas.push_back(reserva);
        }

        // READ
        Reserva *recuperar(int id) {
            for (auto &r : reservas) {
                if (r.getIdReserva() == id) {
                    return &r;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(Reserva reservaAtualizado) {
            for (auto &r : reservas) {
                if (r.getIdReserva() == reservaAtualizado.getIdReserva()) {
                    r = reservaAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int id) {
            for (auto it = reservas.begin(); it != reservas.end(); ++it) {
                if (it->getIdReserva() == id) {
                    reservas.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Reserva> listar() {
            return reservas;
        }
};