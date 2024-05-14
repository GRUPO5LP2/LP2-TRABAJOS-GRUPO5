#include <iostream>
#include <string>
using namespace std;

class Cliente {
    protected:
        string nombre;
        string apellido;
        string correo;
        string direccion;
        string numero_tarjeta;
    public:
        Cliente(string nombre, string apellido, string correo, string direccion, string numero_tarjeta)
        : /* inicializacion de parametros */ nombre(nombre), apellido(apellido), correo(correo), direccion(direccion), numero_tarjeta(numero_tarjeta) {}

        string obtenerInformacion()
        {
            string info;
            info += "Nombre: " + nombre + "\n";
            info += "Apellido: " + apellido + "\n";
            info += "Correo: " + correo + "\n";
            info += "Direccion: " + direccion + "\n";
            info += "Numero de tarjeta: " + numero_tarjeta + "\n";
            return info;
        }
};

class ClienteSeguro : public Cliente {
    public:
        ClienteSeguro(string nombre, string apellido, string correo, string direccion, string numero_tarjeta)
            : Cliente(nombre, apellido, correo, direccion, numero_tarjeta) {}

        string encriptarInformacion() {
            string encriptacion;
            for (char c : correo) {  //Itera cada letra de correo
                encriptacion += to_string(int(c)); //convierte cada letra en ASCII
            }
            return encriptacion;
        }

        bool verificarAutenticidad(string correo_ingresado, string numero_tarjeta_ingresado) {
            return (correo_ingresado == correo) && (numero_tarjeta_ingresado == numero_tarjeta);
        }
};

int main() {
    ClienteSeguro clienteSeguro1("goku", "sayayin 1000", "gokulegana@hotmail_gmail_twitter.com", "Bajo un Puente", "1234 5678 9012 3456");

    cout << "Informacion del cliente:\n";
    cout << clienteSeguro1.obtenerInformacion() << endl;

    cout << "Informacion encriptada: " << clienteSeguro1.encriptarInformacion() << endl;

    bool autenticado = clienteSeguro1.verificarAutenticidad("gokulegana@hotmail_gmail_twitter.com", "1234 5678 9012 3456");
    cout << "Cliente autenticado: " << (autenticado ? "Si" : "No") << endl;

    return 0;
}
