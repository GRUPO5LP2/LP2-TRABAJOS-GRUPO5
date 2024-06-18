#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Arreglo {
private:
    vector<T> arreglo;
public:
    Arreglo(vector<T> arr) : arreglo(arr) {}

    void imprimirArreglo() const {
        for (auto elemento_individual : arreglo) {
            cout << elemento_individual << " ";
        }
        cout << endl;
    }

    void ordenarArreglo() {
        int numero_total = arreglo.size();
        for (int i = 0; i < numero_total - 1; ++i) {
            int indice_menor = i;
            for (int j = i + 1; j < numero_total; ++j) {
                if (arreglo[j] < arreglo[indice_menor]) {
                    indice_menor = j;
                }
            }
            if (indice_menor != i) {
                swap(arreglo[i], arreglo[indice_menor]);
            }
        }
    }
};

int main() {
    vector<int> arreglo_enteros = {5, 2, 7, 3, 1, 9};
    Arreglo<int> arreglo_obj_enteros(arreglo_enteros); //  Cuando instanciamos la clase, debemos especificar el tipo concreto que T representará en esa instancia.

    cout << "\nArreglo original:" << endl;
    arreglo_obj_enteros.imprimirArreglo();

    cout << "\nArreglo ordenado:" << endl;
    arreglo_obj_enteros.ordenarArreglo();
    arreglo_obj_enteros.imprimirArreglo();

    vector<double> arreglo_dobles = {20.4, 20.3, 20.7, 20.3, 20.20};
    Arreglo<double> arreglo_obj_dobles(arreglo_dobles); //  Cuando instanciamos la clase, debemos especificar el tipo concreto que T representará en esa instancia.

    cout << "\nArreglo double original:" << endl;
    arreglo_obj_dobles.imprimirArreglo();

    cout << "\nArreglo double ordenado:" << endl;
    arreglo_obj_dobles.ordenarArreglo();
    arreglo_obj_dobles.imprimirArreglo();

    return 0;
}