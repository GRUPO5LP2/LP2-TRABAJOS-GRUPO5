#include <iostream>
#include <vector>
#include "validaciones.h"
#include "proyecto.h"


using namespace std;

void limpiarPantalla() {
    #ifdef _WIN32
    system("cls"); // Para Windows
    #else
    system("clear"); // Para Unix/Linux
    #endif
}

int menu() {
    cout << "\n--- MENÚ ---" << endl;
    cout << "1. Agregar Tarea Simple" << endl;
    cout << "2. Agregar Tarea Compuesta" << endl;
    cout << "3. Agregar Hito" << endl;
    cout << "4. Listar Tareas" << endl;
    cout << "5. Buscar Tarea por Código" << endl;
    cout << "6. Eliminar Tarea por Código" << endl;
    cout << "7. Salir" << endl;
    cout << "Ingrese su opción: ";
    int opcion;
    cin >> opcion;
    return opcion;
}

int main() {
    Proyecto<Tarea> proyecto;

    while (true) {
        limpiarPantalla(); 
        int opcion = menu();
        switch (opcion) {
            case 1: {
                int codigo;
                string nombre, fecha_inicio, fecha_fin;
                bool completada;

                cout << "Ingrese código: ";
                codigo = validarEntero();
                cout << "Ingrese nombre: ";
                nombre = validarCadena();
                cout << "Ingrese fecha de inicio (dd/mm/yyyy): ";
                fecha_inicio = validarCadena();
                cout << "Ingrese fecha de fin (dd/mm/yyyy): ";
                fecha_fin = validarCadena();
                cout << "¿Está completada? (1 para sí, 0 para no): ";
                completada = validarEntero() == 1;

                proyecto.agregarTarea(new TareaSimple(codigo, nombre, fecha_inicio, fecha_fin, completada));
                break;
            }
            case 2: {
                int codigo, prioridad;
                string nombre, fecha_inicio, fecha_fin;
                int cantidad_subtareas;

                cout << "Ingrese código: ";
                codigo = validarEntero();
                cout << "Ingrese nombre: ";
                nombre = validarCadena();
                cout << "Ingrese fecha de inicio (dd/mm/yyyy): ";
                fecha_inicio = validarCadena();
                cout << "Ingrese fecha de fin (dd/mm/yyyy): ";
                fecha_fin = validarCadena();
                cout << "Ingrese prioridad (entero): ";
                prioridad = validarEntero();
                cout << "Ingrese cantidad de subtareas: ";
                cantidad_subtareas = validarEntero();

                TareaCompuesta* tarea_compuesta = new TareaCompuesta(codigo, nombre, fecha_inicio, fecha_fin, prioridad);
                for (int i = 0; i < cantidad_subtareas; ++i) {
                    int subcodigo;
                    string subnombre, subfecha_inicio, subfecha_fin;
                    bool subcompletada;

                    cout << "Ingrese código de subtarea " << i + 1 << ": ";
                    subcodigo = validarEntero();
                    cout << "Ingrese nombre de subtarea " << i + 1 << ": ";
                    subnombre = validarCadena();
                    cout << "Ingrese fecha de inicio de subtarea " << i + 1 << " (dd/mm/yyyy): ";
                    subfecha_inicio = validarCadena();
                    cout << "Ingrese fecha de fin de subtarea " << i + 1 << " (dd/mm/yyyy): ";
                    subfecha_fin = validarCadena();
                    cout << "¿Está completada la subtarea " << i + 1 << "? (1 para sí, 0 para no): ";
                    subcompletada = validarEntero() == 1;

                    tarea_compuesta->agregarSubtarea(new TareaSimple(subcodigo, subnombre, subfecha_inicio, subfecha_fin, subcompletada));
                }

                proyecto.agregarTarea(tarea_compuesta);
                break;
            }
            case 3: {
                int codigo;
                string nombre, fecha_inicio, fecha_fin, descripcion;

                cout << "Ingrese código: ";
                codigo = validarEntero();
                cout << "Ingrese nombre: ";
                nombre = validarCadena();
                cout << "Ingrese fecha de inicio (dd/mm/yyyy): ";
                fecha_inicio = validarCadena();
                cout << "Ingrese fecha de fin (dd/mm/yyyy): ";
                fecha_fin = validarCadena();
                cout << "Ingrese descripción del hito: ";
                descripcion = validarCadena();

                proyecto.agregarTarea(new Hito(codigo, nombre, fecha_inicio, fecha_fin, descripcion));
                break;
            }
            case 4: {
                limpiarPantalla();
                cout << "\nListado de tareas del proyecto:" << endl;
                proyecto.listarTareas();
                break;
            }
            case 5: {
                int codigo;
                cout << "Ingrese código de la tarea a buscar: ";
                codigo = validarEntero();
                Tarea* tarea_encontrada = proyecto.buscarTarea(codigo);
                if (tarea_encontrada) {
                    limpiarPantalla();
                    cout << "\nDetalles de la tarea encontrada (código " << codigo << "):" << endl;
                    tarea_encontrada->mostrarDetalles();
                } else {
                    cout << "\nTarea con código " << codigo << " no encontrada." << endl;
                }
                break;
            }
            case 6: {
                int codigo;
                cout << "Ingrese código de la tarea a eliminar: ";
                codigo = validarEntero();
                proyecto.eliminarTarea(codigo);
                break;
            }
            case 7: {
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
        cin.get();
    }

    return 0;
}
