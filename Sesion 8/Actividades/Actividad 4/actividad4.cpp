#include <iostream>
using namespace std;

class Vehiculo{
    public:
        void acelerar(){
            cout << "Acelerando vehiculo";
        }
};


class Coche: public Vehiculo{
    public:
        void acelerar(){
            cout << "Acelerando coche";
        }
        void encenderLuces(){
            cout << "Luces del coche encendidas";
        }
};

class Motocicleta: public Vehiculo{
    public:
        void acelerar(){
            cout << "Acelerando motocicleta";
        }
};

int main(){
    Coche coche1;                   // INSTANCIAMOS COCHE1 DE LA CLASE COCHE
    Motocicleta motocicleta1;       // INSTANCIAMOS MOTOCICLETA1 DE LA CLASE MOTOCICLETA
    coche1.acelerar();              // LLAMAMOS AL METODO ACELERAR DE LA CLASE COCHE CON EL OBJETO INSTANCIADO COCHE1
    motocicleta1.acelerar();        // LLAMAMOS AL METODO ACELERAR DE LA CLASE MOTOCICLETA CON EL OBJETO INSTANCIADO  MOTOCICLETA1

    coche1.encenderLuces();         // LLAMAMOS AL METODO ENCENDERLUCES DE LA CLASE COCHE
    //motocicleta1.encenderLuces();    LLAMAMOAS AL METODO ENCENDERLUCES DE LA CLASE MOTOCICLETA Y AL NO EXISTIR SUELTA UN ERROR
}