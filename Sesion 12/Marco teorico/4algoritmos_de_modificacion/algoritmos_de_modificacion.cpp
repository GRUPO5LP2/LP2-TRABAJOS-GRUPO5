#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec_copy(vec.size());
    copy(vec.begin(), vec.end(), vec_copy.begin()); // Copia los elementos de vec a vec_copy
    for (int val : vec_copy) {
        cout << val << " "; // Salida: 1 2 3 4 5
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
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec_copy;
    copy_if(vec.begin(), vec.end(), back_inserter(vec_copy), is_even); // Copia solo los elementos pares
    for (int val : vec_copy) {
        cout << val << " "; // Salida: 2 4
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    vector<string> vec = {"hello", "world"};
    vector<string> vec_move(2);
    move(vec.begin(), vec.end(), vec_move.begin()); // Mueve los elementos de vec a vec_move
    for (const auto& str : vec_move) {
        cout << str << " "; // Salida: hello world
    }
    // vec ahora está en un estado indefinido
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    replace(vec.begin(), vec.end(), 3, 10); // Reemplaza el 3 con el 10
    for (int val : vec) {
        cout << val << " "; // Salida: 1 2 10 4 5
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

bool is_odd(int n) {
    return n % 2 != 0;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    replace_if(vec.begin(), vec.end(), is_odd, 0); // Reemplaza los elementos impares con 0
    for (int val : vec) {
        cout << val << " "; // Salida: 0 2 0 4 0
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 3};
    auto new_end = remove(vec.begin(), vec.end(), 3); // Elimina todos los 3
    vec.erase(new_end, vec.end()); // Reduce el tamaño del contenedor
    for (int val : vec) {
        cout << val << " "; // Salida: 1 2 4 5
    }
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>

bool is_odd(int n) {
    return n % 2 != 0;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    auto new_end = remove_if(vec.begin(), vec.end(), is_odd); // Elimina los elementos impares
    vec.erase(new_end, vec.end()); // Reduce el tamaño del contenedor
    for (int val : vec) {
        cout << val << " "; // Salida: 2 4
    }
    return 0;
}

