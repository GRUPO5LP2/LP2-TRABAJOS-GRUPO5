#include <iostream>
using namespace std;


class Tareas{
    public:
        string nombre, fecha_inicio, fecha_fin;
        Tareas(string n, string fi, string ff){
            nombre = n;
            fecha_inicio = fi;
            fecha_fin = ff;
        }
        virtual void mostrarDetalles() = 0;
};

class TareaSimple : public Tareas{
    public:
        TareaSimple(string n, string fi, string ff) : Tareas(n, fi, ff){}
        void mostrarDetalles() override{
            cout << "Tarea simple: " << nombre << " Fecha inicio: " << fecha_inicio << " Fecha fin: " << fecha_fin << endl;
        }
};

class TareaCompuesta : public Tareas{
    public:
        TareaCompuesta(string n, string fi, string ff) : Tareas(n, fi, ff){}
        void mostrarDetalles() override{
            cout << "Tarea compuesta: " << nombre << " Fecha inicio: " << fecha_inicio << " Fecha fin: " << fecha_fin << endl;
        }
};

class Hito : public Tareas{
    public:
        Hito(string n, string fi, string ff) : Tareas(n, fi, ff){}
        void mostrarDetalles() override{
            cout << "Hito: " << nombre << " Fecha inicio: " << fecha_inicio << " Fecha fin: " << fecha_fin << endl;
        }
};

int main(){
    const int longitud_array = 3;
    Tareas* tareas[longitud_array];
    tareas[0] = new TareaSimple("Tarea 1", "01/01/2021", "05/01/2024");
    tareas[1] = new TareaCompuesta("TareaCompuesta 1", "01/01/2021", "05/01/2024");
    tareas[2] = new Hito("Hito 1", "01/01/2021", "05/01/2024");
    tareas[0]->mostrarDetalles();
    tareas[1]->mostrarDetalles();
    tareas[2]->mostrarDetalles();
    cout << " ==== Iterando sobre el array para hacer uso del polimorfismo ===" << endl;
    for(int i = 0; i < longitud_array; i++){
        tareas[i]->mostrarDetalles();
    }
}
