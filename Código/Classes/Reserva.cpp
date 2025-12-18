class Reserva{
    private:
        int idReserva;
        int dataRetirada;
        int dataReserva;
        bool status;

    public:
        Reserva() = default;

        Reserva(int idReserva, int dataRetirada, int dataReserva, bool status){
            this -> idReserva = idReserva;
            this -> dataRetirada = dataRetirada;
            this -> dataReserva = dataReserva;
            this -> status = status;
        }

        int getIdReserva(){
            return idReserva;
        }

        void setIdReserva(int idReserva){
            this -> idReserva = idReserva;
        }

        int getDataRetirada(){
            return dataRetirada;
        }

        void setDataRetirada(int dataRetirada){
            this -> dataRetirada = dataRetirada;
        }

        int getDataReserva(){
            return dataReserva;
        }

        void setDataReserva(int dataReserva){
            this -> dataReserva = dataReserva;
        }

        bool getStatus(){
            return status;
        }

        void setStatus(bool status){
            this -> status = status;
        }
};