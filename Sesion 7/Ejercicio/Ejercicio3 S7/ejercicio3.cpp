#include <iostream>
using namespace std;


class Movil{
    public:
        string marca = "";
        string modelo = " ";
        string sistema_operativo = " ";
        Movil(string _marca, string _modelo, string _sistema_operativo){
            this->marca = _marca;
            this->modelo = _modelo;
            this->sistema_operativo = _sistema_operativo;
        }
        ~Movil(){
            cout << "Movil destruido" << endl;
        }
};

class Telefono: public Movil{
    public:
        string marca = " ";
        string modelo = " ";
        string sistema_operativo = " ";
        float precio = 0;
        Telefono(string _marca, string _modelo, string _sistema_operativo, float _precio) : Movil(_marca, _modelo, _sistema_operativo){
            this->precio = _precio;
        }
        ~Telefono(){
           cout << "Telefono destruido" << endl;
        }
};



class Tablet : public Movil{
    public:
        string marca = " ";
        string modelo = " ";
        string sistema_operativo = " ";
        string dueno = " ";
        Tablet(string _marca, string _modelo, string _sistema_operativo, string _dueno) : Movil(_marca, _modelo, _sistema_operativo){
            this->dueno = _dueno;
        }
        ~Tablet(){
            cout << "Tablet destruida" << endl;
        }
};

int main(){
    Tablet tablet1("Lenovo", "Tab P11 pro", "Android", "Mauricio");                     //Instanciando objeto Tablet
    Telefono telefono1("Xiaomi", "Redmi Note 13 Pro Plus 5g", "Android", 1599.99);      //Instanciando objeto Telefono
    //tablet1.~Tablet();            Con esta linea se destruye el objeto tablet1
    //telefono1.~Telefono();        Con esta linea se destruye el objeto telefono1
    return 0;                       //Al momento de retornar algo y terminar con el programa se rompen ambos objetos.
}