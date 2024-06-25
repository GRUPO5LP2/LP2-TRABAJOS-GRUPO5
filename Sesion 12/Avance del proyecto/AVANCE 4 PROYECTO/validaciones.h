#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <limits>
#include <regex> // Para validación de fechas
using namespace std;


void limpiarPantalla() {
    #ifdef _WIN32
        system("cls"); // Para Windows
    #else
        system("clear"); // Para Unix/Linux
    #endif
}

string obtenerCadena(const string& mensaje) {
    string valor;
    cout << mensaje;
    cin.ignore();
    getline(cin, valor);
    return valor;
}

string obtenerFecha(const string& mensaje) {
    string fecha;
    regex formato_fecha("\\d{2}/\\d{2}/\\d{4}");
    int dia, mes, anio;
    do {
        cout << mensaje;
        getline(cin, fecha);
        if (!regex_match(fecha, formato_fecha)) {
            cout << "Formato de fecha incorrecto. Por favor, use dd/mm/yyyy." << endl;
            continue;
        }
        sscanf(fecha.c_str(), "%d/%d/%d", &dia, &mes, &anio);
        if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
            cout << "Fecha inválida. Por favor, ingrese un día entre 01-31 y un mes entre 01-12." << endl;
            continue;
        }
        // Validar días específicos de cada mes y año bisiesto
        if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
            cout << "Fecha inválida. El mes " << mes << " no tiene más de 30 días." << endl;
            continue;
        }
        if (mes == 2) {
            bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
            if (dia > (bisiesto ? 29 : 28)) {
                cout << "Fecha inválida. Febrero " << anio << " no tiene más de " << (bisiesto ? 29 : 28) << " días." << endl;
                continue;
            }
        }
        break;
    } while (true);
    return fecha;
}


int obtenerEntero(const string& mensaje) {
    int valor;
    while (true) {
        cout << mensaje;
        cin >> valor;
        if (!cin.fail()) break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, ingrese un número entero." << endl;
    }
    return valor;
}


#endif // VALIDACIONES_H
