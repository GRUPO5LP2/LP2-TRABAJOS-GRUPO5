#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ITarea {
public:
    virtual string obtenerNombreTarea() const = 0;
    virtual string obtenerDescripcionTarea() const = 0;
    virtual bool obtenerEstado() const = 0;
    virtual void marcarComoCompletada() = 0;
    virtual string obtenerDiaLimite() const = 0;
    virtual ~ITarea() {}
};

class Tarea : public ITarea {
private:
    string nombreTarea;
    string descripcionTarea;
    bool estado;
    string diaLimite;

public:
    Tarea(const string& nombreTarea, const string& descripcionTarea, const string& diaLimite) 
        : nombreTarea(nombreTarea), descripcionTarea(descripcionTarea), estado(false), diaLimite(diaLimite) {}

    string obtenerNombreTarea() const override { return nombreTarea; }
    string obtenerDescripcionTarea() const override { return descripcionTarea; }
    bool obtenerEstado() const override { return estado; }
    void marcarComoCompletada() override { estado = true; }
    string obtenerDiaLimite() const override { return diaLimite; }
};

class ITareaManager {
public:
    virtual void agregarTarea(const ITarea& tarea) = 0;
    virtual void completarTarea(int indice) = 0;
    virtual vector<ITarea*> obtenerTodasLasTareas() const = 0;
    virtual ~ITareaManager() {}
};

class GestorTareas : public ITareaManager {
private:
    vector<ITarea*> tareas;

public:
    void agregarTarea(const ITarea& tarea) override {
        tareas.push_back(new Tarea(dynamic_cast<const Tarea&>(tarea)));
    }

    void completarTarea(int indice) override {
        if (indice >= 0 && indice < tareas.size()) {
            tareas[indice]->marcarComoCompletada();
        }
    }

    vector<ITarea*> obtenerTodasLasTareas() const override {
        return tareas;
    }

};

class DisenoPantalla {
public:
    static void mostrarTarea(const ITarea& tarea) {
        cout << "Nombre de la Tarea: " << tarea.obtenerNombreTarea() << endl;
        cout << "Descripción de la Tarea: " << tarea.obtenerDescripcionTarea() << endl;
        cout << "Día Límite: " << tarea.obtenerDiaLimite() << endl;
        cout << "Estado: " << (tarea.obtenerEstado() ? "Completada" : "Incompleta") << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    GestorTareas gestorTareas;

    gestorTareas.agregarTarea(Tarea("Hacer la compra", "Comprar leche y pan", "Lunes"));
    gestorTareas.agregarTarea(Tarea("Estudiar para el examen", "Repasar los apuntes", "Viernes"));

    vector<ITarea*> todasLasTareas = gestorTareas.obtenerTodasLasTareas();
    for (const auto tarea : todasLasTareas) {
        DisenoPantalla::mostrarTarea(*tarea);
    }

    return 0;
}
