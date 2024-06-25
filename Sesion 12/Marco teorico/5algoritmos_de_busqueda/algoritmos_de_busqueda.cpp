#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

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

bool is_even(int n) {
    return n % 2 == 0;
}

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    auto it = find_if(vec.begin(), vec.end(), is_even); // Busca el primer número par
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

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    bool found = binary_search(vec.begin(), vec.end(), 4); // Busca el valor 4
    if (found) {
        cout << "Encontrado" << endl; // Salida: Encontrado
    } else {
        cout << "No encontrado" << endl;
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    auto it = lower_bound(vec.begin(), vec.end(), 4); // Busca el primer elemento >= 4
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

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    auto it = upper_bound(vec.begin(), vec.end(), 4); // Busca el primer elemento > 4
    if (it != vec.end()) {
        cout << "Encontrado: " << *it << endl; // Salida: Encontrado: 5
    } else {
        cout << "No encontrado" << endl;
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    vector<int> vec = {1, 2, 2, 2, 3, 4, 5};
    auto range = equal_range(vec.begin(), vec.end(), 2); // Busca el rango de elementos iguales a 2
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " "; // Salida: 2 2 2
    }
    return 0;
}
