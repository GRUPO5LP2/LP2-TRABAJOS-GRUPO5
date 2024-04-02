#include <iostream>
#include <vector>
using namespace std;

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

class Perro{
    public:
        string nombre;
        string raza;
        int edad;
        Perro(string nombre, string raza, int edad){
            this->nombre = nombre;
            this->raza = raza;
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
    cout << "1. Crear objetos" << endl;
    cout << "2. Comparar objetos" << endl;
    cout << "3. Salir" << endl;
    cout << "Elija una opción: ";
    cin >> opcion;
    return opcion;

}
int main(){
    vector<Estudiante> estudiantes;
    vector<Perro> perros;
    int opcion;
    string nombres, apellidos, colegio, nombre, raza;
    int edad;
    while(true){
        opcion = menu_principal();
        if(opcion == 1){
            cout << "Ingrese nombres: ";
            cin >> nombres;
            cout << "Ingrese apellidos: ";
            cin >> apellidos;
            cout << "Ingrese colegio: ";
            cin >> colegio;
            cout << "Ingrese edad: ";
            cin >> edad;
            estudiantes.push_back(Estudiante(nombres, apellidos, colegio, edad));
        } else if(opcion == 2){
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombres;
            for(int i=0; i<estudiantes.size(); i++){
                if(estudiantes[i].nombres == nombres){
                    while(true){
                        opcion = menu_estudiante();
                        if(opcion == 1){
                            cout << "Ingrese nombre del perro: ";
                            cin >> nombre;
                            cout << "Ingrese raza del perro: ";
                            cin >> raza;
                            cout << "Ingrese edad del perro: ";
                            cin >> edad;
                            perros.push_back(Perro(nombre, raza, edad));
                        } else if(opcion == 2){
                            if(perros.size() >= 2){
                                string nombre_perro1;
                                string nombre_perro2;
                                cout << "Ingrese el nombre del primer perro:";
                                cin >> nombre_perro1;
                                cout << "Ingrese el nombre del segundo perro:";
                                cin >> nombre_perro2;
                                for(int i=0; i<perros.size(); i++){
                                    if(perros[i].nombre == nombre_perro1){
                                        for(int j=0; j<perros.size(); j++){
                                            if(perros[j].nombre == nombre_perro2){
                                                if(perros[i].raza == perros[j].raza){
                                                    if(perros[i].edad == perros[j].edad) {
                                                        cout << "Los perros son los mismos" << endl;
                                                        break;
                                                    } else {
                                                        cout << "Los perros son diferentes" << endl;
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                cout << "No hay suficientes perros" << endl;
                            }
                        } else if(opcion == 3){
                            cout << "Saliendo...";
                            break;
                        }
                    }
                }
            }
        } else if(opcion == 3){
            cout << "Saliendo...";
            return 0;
        }
    }
    return 0;
}