#include <iostream>
using namespace std;

//plantilla
template <typename T>
T mayor(T a, T b) {
    return (a > b) ? a : b;
}


int main() {
    int int1 = 5;
    int int2 = 10;
    double double1 = 5.5;
    double double2 = 2.3;


    // Instanciación explícita
    cout << "El mayor de " << int1 << " y " << int2 << " es: " << mayor<int>(int1, int2) << endl;
    cout << "El mayor de " << double1 << " y " << double2 << " es: " << mayor<double>(double1, double2) << endl;


    return 0;
}
