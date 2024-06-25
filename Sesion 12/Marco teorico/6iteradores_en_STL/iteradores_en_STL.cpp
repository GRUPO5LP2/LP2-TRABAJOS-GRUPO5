#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Iterador para recorrer el vector
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " "; // Salida: 1 2 3 4 5
    }

    // Usando un iterador constante
    for (vector<int>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it) {
        cout << *it << " "; // Salida: 1 2 3 4 5
    }

    return 0;
}


#include <list>
#include <iostream>

int main() {
    list<int> lst = {1, 2, 3, 4, 5};

    // Iterador para recorrer la lista
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " "; // Salida: 1 2 3 4 5
    }

    // Usando un iterador constante
    for (list<int>::const_iterator it = lst.cbegin(); it != lst.cend(); ++it) {
        cout << *it << " "; // Salida: 1 2 3 4 5
    }

    return 0;
}

#include <map>
#include <iostream>

int main() {
    map<int, string> map = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Iterador para recorrer el mapa
    for (map<int, string>::iterator it = map.begin(); it != map.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Usando un iterador constante
    for (map<int, string>::const_iterator it = map.cbegin(); it != map.cend(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    return 0;
}

#include <set>
#include <iostream>

int main() {
    set<int> set = {1, 2, 3, 4, 5};

    // Iterador para recorrer el set
    for (set<int>::iterator it = set.begin(); it != set.end(); ++it) {
        cout << *it << " "; // Salida: 1 2 3 4 5
    }

    // Usando un iterador constante
    for (set<int>::const_iterator it = set.cbegin(); it != set.cend(); ++it) {
        cout << *it << " "; // Salida: 1 2 3 4 5
    }

    return 0;
}
