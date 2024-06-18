#ifndef PROYECTO_H
#define PROYECTO_H

#include <iostream>
#include <vector>
using namespace std;

class Tarea {
public:
    int codigo;
    string nombre, fecha_inicio, fecha_fin;
    
    Tarea(int cod, string n, string fi, string ff) : codigo(cod), nombre(n), fecha_inicio(fi), fecha_fin(ff) {}

    virtual void mostrarDetalles() const {
        cout << "Nombre: " << nombre 
             << ", Fecha de Inicio: " << fecha_inicio 
             << ", Fecha de Finalización: " << fecha_fin << endl;
    }

    virtual ~Tarea() = default;
};

class TareaSimple : public Tarea {
private:
    bool completada;

public:
    TareaSimple(int cod, string n, string fi, string ff, bool com) : Tarea(cod, n, fi, ff), completada(com) {}

    void completarTarea() {
        completada = true;
    }

    void mostrarDetalles() const override {
        cout << "Tarea Simple -> ";
        Tarea::mostrarDetalles();
        cout << "Estado: " << (completada ? "Completada" : "No Completada") << endl;
    }
};

class TareaCompuesta : public Tarea {
private:
    vector<Tarea*> subtareas;
    int prioridad;

public:
    TareaCompuesta(int cod, string n, string fi, string ff, int prio) : Tarea(cod, n, fi, ff), prioridad(prio) {}

    void agregarSubtarea(Tarea* tarea) {
        subtareas.push_back(tarea);
    }

    void mostrarDetalles() const override {
        cout << "Tarea Compuesta -> ";
        Tarea::mostrarDetalles();
        cout << "Prioridad: " << prioridad << endl;
        cout << "Subtareas: " << endl;
        for (const auto& subtarea : subtareas) {
            cout << "  - ";
            subtarea->mostrarDetalles();
        }
    }

    ~TareaCompuesta() {
        for (auto subtarea : subtareas) {
            delete subtarea;
        }
    }
};

class Hito : public Tarea {
private:
    string descripcion;

public:
    Hito(int cod, string n, string fi, string ff, string d) : Tarea(cod, n, fi, ff), descripcion(d) {}

    void mostrarDetalles() const override {
        cout << "Hito -> ";
        Tarea::mostrarDetalles();
        cout << "Descripción: " << descripcion << endl;
    }
};

// Plantilla de clase Proyecto
template <typename T>
class Proyecto {
private:
    vector<T*> tareas;

public:
    void agregarTarea(T* tarea) {
        tareas.push_back(tarea);
    }

    void eliminarTarea(int codigo) {
        // Buscar la tarea por su código y eliminarla si se encuentra
        for (auto it = tareas.begin(); it != tareas.end(); ++it) {
            if ((*it)->codigo == codigo) {
                delete *it; // Liberar memoria de la tarea eliminada
                tareas.erase(it); // Eliminar el puntero del vector
                break;
            }
        }
    }

    T* buscarTarea(int codigo) const {
        // Buscar la tarea por su código y devolver un puntero a ella
        for (auto tarea : tareas) {
            if (tarea->codigo == codigo) {
                return tarea;
            }
        }
        return nullptr; // Retornar nullptr si no se encuentra la tarea
    }

    void listarTareas() const {
        for (const auto& tarea : tareas) {
            tarea->mostrarDetalles();
            cout << endl;
        }
    }

    ~Proyecto() {
        for (auto tarea : tareas) {
            delete tarea; // Liberar memoria de todas las tareas al destruir el proyecto
        }
    }
};

#endif
