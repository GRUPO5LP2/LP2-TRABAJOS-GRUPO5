#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> numeros;
    int num;
    
    cout << "Ingrese números enteros (ingrese 0 para terminar):" << endl;
    while (cin >> num && num != 0) {
        numeros.push_back(num);
    }
    
    int suma = accumulate(numeros.begin(), numeros.end(), 0);
    
    auto min_max = minmax_element(numeros.begin(), numeros.end());
    int min = *min_max.first;
    int max = *min_max.second;
    
    sort(numeros.begin(), numeros.end());
    
    numeros.erase(remove_if(numeros.begin(), numeros.end(), [](int x) { return x % 2 == 0; }), numeros.end());
    
    // Mostrar resultados
    cout << "Suma de todos los números: " << suma << endl;
    cout << "Número mínimo: " << min << endl;
    cout << "Número máximo: " << max << endl;
    cout << "Números ordenados y sin pares: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
