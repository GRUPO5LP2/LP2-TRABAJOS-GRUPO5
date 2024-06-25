
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    cout << vec[0] << endl;
    return 0;
}

#include <deque>
#include <iostream>

int main() {
    deque<int> deq = {1, 2, 3, 4, 5};
    deq.push_front(0);
    deq.push_back(6);
    cout << deq[0] << endl; // Acceso rápido
    return 0;
}

#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> lista1 = {1, 2, 3, 4, 5};
    lista1.push_back(6);
    lista1.push_front(0);
    for (const int& valor : lista1) {
        cout << valor << " ";
    }
    return 0;
}

#include <forward_list>
#include <iostream>
using namespace std;

int main() {
    forward_list<int> flst = {1, 2, 3, 4, 5};
    flst.push_front(0);
    for (const int& val : flst) {
        cout << val << " ";
    }
    return 0;
}
