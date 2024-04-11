#include <iostream>
using namespace std;

// Interfaz para el Banco
class IBanco {
public:
    virtual void procesarPago(double monto) = 0;
};
// Clase Banco que implementa la interfaz IBanco
class Banco : public IBanco {
public:
    void procesarPago(double monto) {
    // Lógica para procesar el pago en el banco
    cout << "Pago procesado en el banco por $" << monto << endl;
 }
};
// Clase ProcesadorDePagos que depende de la interfaz IBanco
class ProcesadorDePagos {
    private:
        IBanco* banco;
    public:
        ProcesadorDePagos(IBanco* banco) {
            this->banco = banco;
        }
        void procesarPago(double monto) {
            banco->procesarPago(monto);
                cout << "Pago procesado exitosamente" << endl;
    }
};

int main() {
    Banco banco;
    ProcesadorDePagos procesador(&banco);
    procesador.procesarPago(100.0);
    return 0;
}
