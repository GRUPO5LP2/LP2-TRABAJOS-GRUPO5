#include <iostream>
using namespace std;

class Banco {
public:
    static double tasa_interes;
   
    static void cambiar_tasa_interes(double nueva_tasa) {
        tasa_interes = nueva_tasa;
    }
};

double Banco::tasa_interes = 0.05;

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldoInicial) : saldo(saldoInicial) {}

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "Saldo insuficiente" << endl;
        }
    }

    double calcular_interes() {
        return saldo * Banco::tasa_interes;
    }

    friend double obtener_saldo(CuentaBancaria& cuenta);
};

double obtener_saldo(CuentaBancaria& cuenta) {
    return cuenta.saldo;
}

int main() {
    CuentaBancaria cuenta1(1000);
    cout << "Saldo actual: " << obtener_saldo(cuenta1) << endl;

    Banco::cambiar_tasa_interes(0.06);
    cout << "Nueva tasa de interés: " << Banco::tasa_interes << endl;

    cuenta1.depositar(500);
    cout << "Saldo después del depósito: " << obtener_saldo(cuenta1) << endl;

    cuenta1.retirar(200);
    cout << "Saldo después del retiro: " << obtener_saldo(cuenta1) << endl;

    double interes_ganado = cuenta1.calcular_interes();
    cout << "Interés ganado: " << interes_ganado << endl;

    return 0;
}
