class Tape;

class Rent {
private:
    Tape* tape;
    int diasAlugada;
public:
    Rent(Tape* tape, int diasAlugada) {
        this->tape = tape;
        this->diasAlugada = diasAlugada;
    }
    Tape* getTape() {
        return tape;
    }
    int getDiasAlugada() {
        return diasAlugada;
    }
};

