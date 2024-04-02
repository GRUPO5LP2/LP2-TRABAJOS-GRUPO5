#include <iostream>
#include <vector>
using namespace std;

class Tienda {
    public:
        string nombre;
        string direccion;
        string tipo;
        Tienda(string nombre, string direccion, string tipo) {
            this->nombre = nombre;
            this->direccion = direccion;
            this->tipo = tipo;
        }

        void vender_productos(){
            string producto;
            int cantidad;
            cout<<"Que producto desea vender?";
            cin>>producto;
            cout<<"Cantidad de productos: ";
            cin>>cantidad;
            cout<<"Producto vendido!"<<endl;
        }

        void agregar_productos(){
            string producto;
            int cantidad;
            cout<<"Que producto desea agregar?";
            cin>>producto;
            cout<<"Cantidad de productos: ";
            cin>>cantidad;
            cout<<"Producto agregado!"<<endl;
        }

};

class Estudiante {
    public:
        string nombres;
        string apellidos;
        string colegio;
        int edad;
        Estudiante(string nombres, string apellidos, string colegio, int edad) {
            this->nombres = nombres;
            this->apellidos = apellidos;
            this->colegio = colegio;
            this->edad = edad;
        }

};



int menu_principal(){
    int opcion;
    cout << "Menu" << endl;
    cout << "1. Generar estudiante" << endl;
    cout << "2. Manejar estudiante" << endl;
    cout << "3. Salir" << endl;
    cout << "Elija una opción: ";
    cin >> opcion;
    return opcion;
}

int menu_estudiante(){
    int opcion;
    cout << "Menu" << endl;
    cout << "1. Crear tienda" << endl;
    cout << "2. Agregar productos" << endl;
    cout << "3. Vender productos" << endl;
    cout << "4. Salir" << endl;
    cout << "Elija una opción: ";
    cin >> opcion;
    return opcion;
}

int main() {
    vector<Tienda> tiendas;
    vector<Estudiante> estudiantes;
    string nombre, direccion, tipo;
    string nombres, apellidos, colegio;
    int edad, opcion;
    while(true){
        opcion = menu_principal();
        if(opcion == 1){
            cout<<"Nombres del estudiante: ";
            cin>>nombres;
            cout<<"Apellidos del estudiante: ";
            cin>>apellidos;
            cout<<"Colegio del estudiante: ";
            cin>>colegio;
            cout<<"Edad del estudiante: ";
            cin>>edad;
            Estudiante estudiante(nombres, apellidos, colegio, edad);
            estudiantes.push_back(estudiante);
        } else if (opcion == 2){
            cout<<"Ingrese el nombre del estudiante:";
            cin>>nombres;
            for(int i = 0; i < estudiantes.size(); i++){
                if(estudiantes[i].nombres == nombres){
                    opcion = menu_estudiante();
                    while(true){
                        if(opcion == 1){
                            cout<<"Nombre de la tienda: ";
                            cin>>nombre;
                            cout<<"Direccion de la tienda: ";
                            cin>>direccion;
                            cout<<"Tipo de tienda: ";
                            cin>>tipo;
                            Tienda tienda(nombre, direccion, tipo); 
                            tiendas.push_back(tienda); 
                            break;
                        } else if(opcion == 2){
                            cout<<"Ingrese el nombre de la tienda:";
                            cin>>nombre;
                            for(int j = 0; j < tiendas.size(); j++){
                                if(tiendas[j].nombre == nombre){
                                    tiendas[j].agregar_productos();
                                } else {
                                    cout<<"Tienda no encontrada"<<endl;
                                }
                            }
                        } else if(opcion == 3){
                            cout<<"Ingrese el nombre de la tienda:";
                            cin>>nombre;
                            for(int j = 0; j < tiendas.size(); j++){
                                if(tiendas[j].nombre == nombre){
                                    tiendas[j].vender_productos();
                                } else {
                                    cout<<"Tienda no encontrada"<<endl;
                                }
                            }
                        } else if(opcion == 4){
                            cout << "Saliendo..." << endl;
                            break;
                        } 
                    }
                } else {
                    cout<<"Estudiante no encontrado"<<endl;
                }
            }
        } else if (opcion == 3){
            cout << "Saliendo..." << endl;
            return 0;
        }
    }
}