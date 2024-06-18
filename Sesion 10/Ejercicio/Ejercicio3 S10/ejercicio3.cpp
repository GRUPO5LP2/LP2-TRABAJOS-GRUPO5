#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Recipiente {
    private:
        vector<T> arreglo;
    public:
        Recipiente(const vector<T>& arr) : arreglo(arr) {}

        void imprimirArreglo() const {
            for (auto elemento : arreglo) {
                cout << elemento << " ";
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
    Recipiente<int> recipiente_enteros(arreglo_enteros);

    cout << "\nArreglo de enteros original:" << endl;
    recipiente_enteros.imprimirArreglo();

    cout << "\nArreglo de enteros ordenado:" << endl;
    recipiente_enteros.ordenarArreglo();
    recipiente_enteros.imprimirArreglo();

    vector<string> arreglo_dobles = {"Siempre buenos dias", "Ingeniero", "Oscar", "Pongame", "20", "porfavor"}; 
    Recipiente<string> recipiente_dobles(arreglo_dobles);

    cout << "\nArreglo de strings original:" << endl;
    recipiente_dobles.imprimirArreglo();

    cout << "\nArreglo de strings ordenado:" << endl;
    recipiente_dobles.ordenarArreglo(); // Compara los elementos basándose en sus valores ASCII y realiza intercambios para colocar los elementos en orden creciente.
    recipiente_dobles.imprimirArreglo();

    return 0;
}
