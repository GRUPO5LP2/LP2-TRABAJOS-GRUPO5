#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <fstream>
#include "validaciones.h"

using namespace std;

class Tarea {
public:
    string nombre;
    string fechaInicio;
    string fechaFin;

    Tarea(const string& nom, const string& inicio, const string& fin)
        : nombre(nom), fechaInicio(inicio), fechaFin(fin) {}

    virtual void mostrarDetalles() const = 0;

    virtual ~Tarea() = default;
};

class TareaSimple : public Tarea {
public:
    TareaSimple(const string& nom, const string& inicio, const string& fin)
        : Tarea(nom, inicio, fin) {}

    void mostrarDetalles() const override {
        cout << "Tarea Simple: " << nombre << ", Inicio: " << fechaInicio << ", Fin: " << fechaFin << endl;
    }
};

class TareaCompuesta : public Tarea {
public:
    vector<shared_ptr<Tarea>> subtareas;

    TareaCompuesta(const string& nom, const string& inicio, const string& fin)
        : Tarea(nom, inicio, fin) {}

    void agregarSubtarea(const shared_ptr<Tarea>& tarea) {
        subtareas.push_back(tarea);
    }

    void mostrarDetalles() const override {
        cout << "Tarea Compuesta: " << nombre << ", Inicio: " << fechaInicio << ", Fin: " << fechaFin << endl;
        for (const auto& subtarea : subtareas) {
            subtarea->mostrarDetalles();
        }
    }
};

class Hito : public Tarea {
public:
    Hito(const string& nom, const string& inicio)
        : Tarea(nom, inicio, inicio) {}

    void mostrarDetalles() const override {
        cout << "Hito: " << nombre << ", Fecha: " << fechaInicio << endl;
    }
};

template <typename T>
class Proyecto {
    vector<shared_ptr<T>> tareas;

public:
    void agregarTarea(const shared_ptr<T>& tarea) {
        tareas.push_back(tarea);
    }

    void eliminarTarea(const string& nombre) {
        tareas.erase(remove_if(tareas.begin(), tareas.end(),
                               [&nombre](const shared_ptr<T>& tarea) { return tarea->nombre == nombre; }),
                     tareas.end());
    }

    shared_ptr<T> buscarTarea(const string& nombre) const {
        auto it = find_if(tareas.begin(), tareas.end(),
                          [&nombre](const shared_ptr<T>& tarea) { return tarea->nombre == nombre; });
        return (it != tareas.end()) ? *it : nullptr;
    }

    void listarTareas() const {
        for (const auto& tarea : tareas) {
            tarea->mostrarDetalles();
        }
    }

    void guardarEnArchivo(const string& nombreArchivo) const {
        ofstream archivo(nombreArchivo);
        if (!archivo) {
            throw runtime_error("No se pudo abrir el archivo para escritura.");
        }
        for (const auto& tarea : tareas) {
            archivo << tarea->nombre << "," << tarea->fechaInicio << "," << tarea->fechaFin << endl;
        }
        archivo.close();
    }

    void cargarDesdeArchivo(const string& nombreArchivo) {
        ifstream archivo(nombreArchivo);
        if (!archivo) {
            throw runtime_error("No se pudo abrir el archivo para lectura.");
        }
        tareas.clear();
        string nombre, fechaInicio, fechaFin;
        while (archivo >> nombre >> fechaInicio >> fechaFin) {
            tareas.push_back(make_shared<TareaSimple>(nombre, fechaInicio, fechaFin));
        }
        archivo.close();
    }
};

int menu() {
    cout << "\n--- MENÚ ---" << endl;
    cout << "1. Agregar Tarea Simple" << endl;
    cout << "2. Agregar Tarea Compuesta" << endl;
    cout << "3. Agregar Hito" << endl;
    cout << "4. Listar Tareas" << endl;
    cout << "5. Buscar Tarea por Nombre" << endl;
    cout << "6. Eliminar Tarea por Nombre" << endl;
    cout << "7. Salir" << endl;
    cout << "Ingrese su opción: ";
    int opcion = obtenerEntero("Ingrese su opción: ");
    return opcion;
}

int main() {
    Proyecto<Tarea> proyecto;

    while (true) {
        limpiarPantalla();
        int opcion = menu();
        cin.ignore();
        switch (opcion) {
            case 1: {
                string nombre = obtenerCadena("Ingrese nombre: ");
                string fecha_inicio = obtenerFecha("Ingrese fecha de inicio (dd/mm/yyyy): ");
                string fecha_fin = obtenerFecha("Ingrese fecha de fin (dd/mm/yyyy): ");
                proyecto.agregarTarea(make_shared<TareaSimple>(nombre, fecha_inicio, fecha_fin));
                break;
            }
            case 2: {
                string nombre = obtenerCadena("Ingrese nombre: ");
                string fecha_inicio = obtenerFecha("Ingrese fecha de inicio (dd/mm/yyyy): ");
                string fecha_fin = obtenerFecha("Ingrese fecha de fin (dd/mm/yyyy): ");
                auto tarea_compuesta = make_shared<TareaCompuesta>(nombre, fecha_inicio, fecha_fin);
                int cantidad_subtareas = obtenerEntero("Ingrese cantidad de subtareas: ");
                for (int i = 0; i < cantidad_subtareas; ++i) {
                    cout << "Subtarea " << i + 1 << ":" << endl;
                    string subnombre = obtenerCadena("Ingrese nombre de subtarea: ");
                    string subfecha_inicio = obtenerFecha("Ingrese fecha de inicio de subtarea (dd/mm/yyyy): ");
                    string subfecha_fin = obtenerFecha("Ingrese fecha de fin de subtarea (dd/mm/yyyy): ");
                    tarea_compuesta->agregarSubtarea(make_shared<TareaSimple>(subnombre, subfecha_inicio, subfecha_fin));
                }
                proyecto.agregarTarea(tarea_compuesta);
                break;
            }
            case 3: {
                string nombre = obtenerCadena("Ingrese nombre: ");
                string fecha_inicio = obtenerFecha("Ingrese fecha (dd/mm/yyyy): ");
                proyecto.agregarTarea(make_shared<Hito>(nombre, fecha_inicio));
                break;
            }
            case 4: {
                limpiarPantalla();
                cout << "\nListado de tareas del proyecto:" << endl;
                proyecto.listarTareas();
                break;
            }
            case 5: {
                string nombre = obtenerCadena("Ingrese nombre de la tarea a buscar: ");
                auto tarea_encontrada = proyecto.buscarTarea(nombre);
                if (tarea_encontrada) {
                    limpiarPantalla();
                    cout << "\nDetalles de la tarea encontrada:" << endl;
                    tarea_encontrada->mostrarDetalles();
                } else {
                    cout << "\nTarea con nombre " << nombre << " no encontrada." << endl;
                }
                break;
            }
            case 6: {
                string nombre = obtenerCadena("Ingrese nombre de la tarea a eliminar: ");
                proyecto.eliminarTarea(nombre);
                break;
            }
            case 7: {
                try {
                    proyecto.guardarEnArchivo("proyecto.txt");
                } catch (const exception &e) {
                    cerr << "Error al guardar el proyecto: " << e.what() << endl;
                }
                cout << "Saliendo del programa." << endl;
                return 0;
            }
            default: {
                cout << "Opción inválida. Por favor, seleccione una opción válida del menú." << endl;
                break;
            }
        }
        cout << "\nPresione Enter para continuar...";
        cin.ignore();
    }

    return 0;
}
