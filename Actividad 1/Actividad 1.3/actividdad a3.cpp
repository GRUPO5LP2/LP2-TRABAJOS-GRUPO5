#include <iostream>
using namespace std;

class Estudiantes {
    public:
    string nombre;
    int edad;
    int grado;
    
    //funcion constructor
    Estudiantes(string nameEstudiante, int edadEstudiante, int gradoEstudiante){
        nombre=nameEstudiante;
        edad=edadEstudiante;
        grado=gradoEstudiante;
    }
    
    void tomarExamen(){
        cout<<"Tomando Evaluación..."<<endl;
    }
    void calificarExamen(){
        cout<<"Examen Calificado :)"<<endl;
    }
};

int main(){
    Estudiantes escolar1("Mauricio", 15, 4);
    Estudiantes escolar2("Oscar", 20, 2);
    escolar1.tomarExamen();
    escolar2.calificarExamen();
    return 0;
}


