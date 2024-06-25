#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    sort(vec.begin(), vec.end()); // Ordena el vector en orden ascendente
    for (int val : vec) {
        cout << val << " "; // Salida: 1 1 3 4 5 9
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    auto it = find(vec.begin(), vec.end(), 4); // Busca el valor 4
    if (it != vec.end()) {
        cout << "Encontrado: " << *it << endl; // Salida: Encontrado: 4
    } else {
        cout << "No encontrado" << endl;
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

void print(int val) {
    cout << val << " ";
}

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    for_each(vec.begin(), vec.end(), print); // Aplica la función print a cada elemento
    // Salida: 3 1 4 1 5 9
    return 0;
}

#include <numeric>
#include <vector>
#include <iostream>

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    int sum = accumulate(vec.begin(), vec.end(), 0); // Suma los elementos del vector
    cout << "Suma: " << sum << endl; // Salida: Suma: 23
    return 0;
}

