#include <iostream>
using namespace std;

class Cliente {
protected:
    string nombre;
    string apellido;
    string correo;
    string direccion;
    string numero_tarjeta;

public:
    Cliente(string nombre, string apellido, string correo, string direccion, string numero_tarjeta) :
        nombre(nombre), apellido(apellido), correo(correo), direccion(direccion), numero_tarjeta(numero_tarjeta) {}

    virtual ~Cliente() {
        cout << "Destructor de Cliente" << endl;
    }

    string obtenerInformacion() {
        string info;
        info += "Nombre: " + nombre + "\n";
        info += "Apellido: " + apellido + "\n";
        info += "Correo: " + correo + "\n";
        info += "Direccion: " + direccion + "\n";
        info += "Numero de tarjeta: " + numero_tarjeta + "\n";
        return info;
    }

protected:
    string encriptarInformacion() {
        string encriptacion;
        for (char c : correo) {
            encriptacion += to_string(int(c));
        }
        return encriptacion;
    }
};

class ClienteSeguro : public Cliente {
private:
    string codigoSeguridad;

public:
    ClienteSeguro(string nombre, string apellido, string correo, string direccion, string numero_tarjeta, string codigoSeguridad) :
        Cliente(nombre, apellido, correo, direccion, numero_tarjeta), codigoSeguridad(codigoSeguridad) {}

    ~ClienteSeguro() {
        cout << "Destructor de ClienteSeguro" << endl;
    }

    bool verificarAutenticidad(string correo_ingresado, string numero_tarjeta_ingresado) {
        return (correo_ingresado == correo) && (numero_tarjeta_ingresado == numero_tarjeta);
    }

    string obtenerInformacionEncriptada() {
        return encriptarInformacion();
    }
};

int main() {
    ClienteSeguro* clienteSeguro1 = new ClienteSeguro("goku", "sayayin 1000", "gokulegana@hotmail_gmail_twitter.com", "Bajo un Puente", "1234 5678 9012 3456", "ABC123");
    cout << "Informacion del cliente:\n";
    cout << clienteSeguro1->obtenerInformacion() << endl;
    cout << "Informacion encriptada: " << clienteSeguro1->obtenerInformacionEncriptada() << endl;
    bool autenticado = clienteSeguro1->verificarAutenticidad("gokulegana@hotmail_gmail_twitter.com", "1234 5678 9012 3456");
    cout << "Cliente autenticado: " << (autenticado ? "Si" : "No") << endl;

    delete clienteSeguro1;
    return 0;
}