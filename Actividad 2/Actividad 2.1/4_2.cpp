#include <iostream>
#include <vector>
using namespace std;

class Factura {
    private:

        int numero_factura;
        string fecha_factura;
        float monto_factura;

    public:
        Factura(int numero_factura, string fecha_factura, float monto_factura){
            this->numero_factura = numero_factura;
            this->fecha_factura = fecha_factura;
            this->monto_factura = monto_factura;
        }

        int get_numero_factura(){
            return numero_factura;
        }

        void set_numero_factura(int numero_factura){
            this->numero_factura = numero_factura;
        }

        string get_fecha_factura(){
            return fecha_factura;
        }

        void set_fecha_factura(string fecha_factura){
            this->fecha_factura = fecha_factura;
        }

        float get_monto_factura(){
            return monto_factura;
        }

        void set_monto_factura(float monto_factura){
            this->monto_factura = monto_factura;
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


        void facturanding(){
            cout<<"FACTURANDING PA";
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
    cout << "1. Crear factura" << endl;
    cout << "2. Obtener numero de la factura" << endl;
    cout << "3. Modificar numero de la factura" << endl;
    cout << "4. Obtener fecha de la factura" << endl;
    cout << "5. Modificar fecha de la factura" << endl;
    cout << "6. Obtener monto de la factura" << endl;
    cout << "7. Modificar monto de la factura" << endl;
    cout << "8. Salir" << endl;
    cout << "Elija una opción: ";
    cin >> opcion;
    return opcion;
}

int main() {

    vector<Factura> facturas;
    vector<Estudiante> estudiantes;
    string nombres, apellidos, colegio;
    int numero_factura, edad, opcion;
    string fecha_factura;
    float monto_factura;

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
            cout<<"Ingrese el nombre del estudiante: ";
            cin>>nombres;
            for(int i=0; i<estudiantes.size(); i++){
                if (estudiantes[i].nombres == nombres){
                    while(true){
                        opcion = menu_estudiante();
                        if(opcion==1){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            cout<<"Fecha de la factura: ";
                            cin>>fecha_factura;
                            cout<<"Monto de la factura: ";
                            cin>>monto_factura;
                            Factura factura(numero_factura, fecha_factura, monto_factura);
                            facturas.push_back(factura);
                        } else if(opcion==2){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            for(int i=0; i<facturas.size(); i++){
                                if(facturas[i].get_numero_factura() == numero_factura){
                                    cout<<"Numero de la factura: "<<facturas[i].get_numero_factura()<<endl;
                                } else {
                                    cout<<"No se encontro la factura"<<endl;
                                }
                            }
                            
                        } else if(opcion==3){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            for(int i=0; i<facturas.size(); i++){
                                if(facturas[i].get_numero_factura() == numero_factura){
                                    cout<<"Nuevo numero de factura: ";
                                    cin>>numero_factura;
                                    facturas[i].set_numero_factura(numero_factura);
                                } else {
                                    cout<<"No se encontro la factura"<<endl;
                                }
                            }
                        } else if(opcion==4){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            for(int i=0; i<facturas.size(); i++){
                                if(facturas[i].get_numero_factura() == numero_factura){
                                    cout<<"Fecha de la factura: "<<facturas[i].get_fecha_factura()<<endl;
                                } else {
                                    cout<<"No se encontro la factura"<<endl;
                                }
                            }
                        } else if(opcion==5){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            for(int i=0; i<facturas.size(); i++){
                                if(facturas[i].get_numero_factura() == numero_factura){
                                    cout<<"Nueva fecha de factura: ";
                                    cin>>fecha_factura;
                                    facturas[i].set_fecha_factura(fecha_factura);
                                } else {
                                    cout<<"No se encontro la factura"<<endl;
                                }
                            }
                        } else if(opcion==6){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            for(int i=0; i<facturas.size(); i++){
                                if(facturas[i].get_numero_factura() == numero_factura){
                                    cout<<"Monto de la factura: "<<facturas[i].get_monto_factura()<<endl;
                                } else {
                                    cout<<"No se encontro la factura"<<endl;
                                }
                            }
                        } else if(opcion==7){
                            cout<<"Numero de la factura: ";
                            cin>>numero_factura;
                            for(int i=0; i<facturas.size(); i++){
                                if(facturas[i].get_numero_factura() == numero_factura){
                                    cout<<"Nuevo monto de factura: ";
                                    cin>>monto_factura;
                                    facturas[i].set_monto_factura(monto_factura);
                                } else {
                                    cout<<"No se encontro la factura"<<endl;
                                }
                            }
                        } else if(opcion==8){
                            cout<<"Saliendo..."<<endl;
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