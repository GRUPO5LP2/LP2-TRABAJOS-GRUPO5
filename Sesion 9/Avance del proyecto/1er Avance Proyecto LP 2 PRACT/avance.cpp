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
        void mostrarDetalles(){
            cout << "Tarea simple: " << nombre << " Fecha inicio: " << fecha_inicio << " Fecha fin: " << fecha_fin << endl;
        }
};

class TareaCompuesta : public Tareas{
    public:
        TareaCompuesta(string n, string fi, string ff) : Tareas(n, fi, ff){}
        void mostrarDetalles(){
            cout << "Tarea compuesta: " << nombre << " Fecha inicio: " << fecha_inicio << " Fecha fin: " << fecha_fin << endl;
        }
};

class Hito : public Tareas{
    public:
        Hito(string n, string fi, string ff) : Tareas(n, fi, ff){}
        void mostrarDetalles(){
            cout << "Hito: " << nombre << " Fecha inicio: " << fecha_inicio << " Fecha fin: " << fecha_fin << endl;
        }
};

int main(){
    Tareas* tareas[3];
    tareas[0] = new TareaSimple("Tarea 1", "01/01/2021", "02/01/2021");
    tareas[1] = new TareaCompuesta("Tarea 2", "01/01/2021", "02/01/2021");
    tareas[2] = new Hito("Hito 1", "01/01/2021", "02/01/2021");
}