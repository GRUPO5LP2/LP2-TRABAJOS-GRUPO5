#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void imprimirArreglo(vector<T> arreglo) {
    for (auto elemento_individual : arreglo) {
        cout << elemento_individual << " ";
    }
    cout << endl;
}

template <typename T>
void ordenarArreglo(vector<T>& arreglo) {
    int numero_total = arreglo.size();

    for (int i = 0; i < numero_total - 1; ++i)
    {
        int indice_menor = i;
        for (int j = i + 1; j < numero_total; ++j)
        {
            if (arreglo[j] < arreglo[indice_menor]){
                indice_menor = j;
            }
        }
        if (indice_menor != i)
        {
            swap(arreglo[i], arreglo[indice_menor]);
        }
    }
}

int main() {

    vector<int> arreglo_enteros = {5, 2, 7, 3, 1, 9};

    cout << "\nArreglo original:" << endl;
    imprimirArreglo(arreglo_enteros);

    cout << "\nArreglo ordenado:" << endl;
    ordenarArreglo(arreglo_enteros);
    imprimirArreglo(arreglo_enteros);

    vector<double> arreglo_dobles = {3.5, 1.2, 8.9, 2.3, 5.6};

    cout << "\nArreglo double original:" << endl;
    imprimirArreglo(arreglo_dobles);

    cout << "\nArreglo double ordenado:" << endl;
    ordenarArreglo(arreglo_dobles);
    imprimirArreglo(arreglo_dobles);

    return 0;
}
