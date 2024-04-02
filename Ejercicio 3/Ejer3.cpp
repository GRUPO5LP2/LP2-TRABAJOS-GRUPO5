#include <iostream>
#include <vector>
using namespace std;

class Avion{
    
    public:
        string nombre;
        float velocidad;
        float combustible;
        string salud;

        Avion(string nombre, float velocidad, float combustible, string salud){
            this->nombre = nombre;
            this->velocidad = velocidad;
            this->combustible = combustible;
            this->salud = salud;
        }

        void despegar(){
            cout<<"Despegando..."<<endl;
        }

        void aterrizar(){
            cout<<"Aterrizando..."<<endl;
        }

        void volar(){
            cout<<"Volando..."<<endl;
        }
};

class Mision{

    public:
        string destino;
        string duracion;
        int tripulacion;

        Mision(string destino, string duracion, int tripulacion){
            this->destino = destino;
            this->duracion = duracion;
            this->tripulacion = tripulacion;
        }

        void iniciar(){
            cout<<"Iniciando mision..."<<endl;
        }

        void finalizar(){
            cout<<"Finalizando mision..."<<endl;
        }

        void abortar(){
            cout<<"Abortando mision..."<<endl;
        }
};
int menu_juego(){
    int opcion;
    cout<<"1. Iniciar mision"<<endl;
    cout<<"2. Finalizar mision"<<endl;
    cout<<"3. Abortar mision"<<endl;
    cout<<"4. Despegar"<<endl;
    cout<<"5. Aterrizar"<<endl;
    cout<<"6. Volar"<<endl;
    cout<<"7. Verificar combustible"<<endl;
    cout<<"8. Verificar tripulacion"<<endl;
    cout<<"9. Salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>opcion;
    return opcion;
}
int main(){
    int opcion, tripulacion, tiempo_volado;
    float velocidad, combustible;
    string salud, destino, duracion, nombre;
    cout<<"RECOMENDACIONES: "<<endl;
    cout<<"- El combustible debe ser mayor a 20"<<endl;
    cout<<"- La tripulacion debe ser mayor a 3"<<endl;
    cout<<"- La mision se completara al volar 100 minutos"<<endl;
    cout<<"- Si el combustible es menor a 10, fallaste en tu mision"<<endl;
    cout<<"- Si el combustible es menor a 20, se recomienda abortar mision"<<endl;
    cout<<"- Si la tripulacion es menor a 3, se recomienda abortar mision"<<endl;
    cout<<"- Si la mision se aborta, fallaste en tu mision"<<endl;
    cout<<endl;
    cout<<"Ingrese el nombre del avion: ";
    cin>>nombre;
    cout<<"Ingrese la velocidad del avion: ";
    cin>>velocidad;
    cout<<"Ingrese el combustible del avion: ";
    cin>>combustible;
    cout<<"Ingrese la salud del avion: ";
    cin>>salud;
    Avion avion(nombre, velocidad, combustible, salud);
    cout<<endl;
    cout<<"Ingrese el destino de la mision: ";
    cin>>destino;
    cout<<"Ingrese la duracion de la mision: ";
    cin>>duracion;
    cout<<"Ingrese la tripulacion de la mision: ";
    cin>>tripulacion;
    Mision mision(destino, duracion, tripulacion);
    cout<<endl;
    while(true){
        opcion = menu_juego();
        if(avion.combustible < 10){
            cout<<"El combustible es muy bajo, fallaste en tu mision."<<endl;
            return 0;
        }
        if(opcion == 1){
            avion.despegar();
            avion.combustible -= 10;
        } else if(opcion == 2){
            avion.aterrizar();
        } else if(opcion == 3){
            avion.volar();
            tiempo_volado += 10;
            avion.combustible -= 5;
            if(tiempo_volado == 100){
                cout<<"Mision completada!"<<endl;
                return 0;
            } 
        } else if(opcion == 4){
            mision.iniciar();
        } else if(opcion == 5){
            mision.finalizar();
        } else if(opcion == 6){
            mision.abortar();
            cout<<"Mision fallida!"<<endl;
            return 0;
        } else if(opcion == 7){
            cout<<"El combustible es de: "<<avion.combustible<<endl;
            if(avion.combustible < 20){
                cout<<"El combustible es menor a 20, se recomienda abortar mision"<<endl;
            }
        } else if(opcion == 8){
            cout<<"La tripulacion es de: "<<mision.tripulacion<<endl;
            if(mision.tripulacion < 3){
                cout<<"La tripulacion es menor a 3, se recomienda abortar mision"<<endl;
            }
        } else if(opcion == 9){
            return 0;
        }
    }
}