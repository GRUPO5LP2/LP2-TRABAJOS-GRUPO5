#include <iostream>
using namespace std;

//Plantilla con nombre T
template <typename T>

//T reemplaza el tipo de funcion (int,float,double,void, etc)
T mayor(T a, T b) {
    return (a > b) ? a : b;
}

int main() {

    // Usando plantilla int
    int int1 = 5;
    int int2 = 10;
    cout << "El mayor de " << int1 << " y " << int2 << " es: " << mayor(int1, int2) << endl;

    // Usando plantilla double
    double double1 = 5.5;
    double double2 = 2.3;
    cout << "El mayor de " << double1 << " y " << double2 << " es: " << mayor(double1, double2) << endl;

    // Usando plantilla char
    char char1 = 'a';
    char char2 = 'z';
    cout << "El mayor de " << char1 << " y " << char2 << " es: " << mayor(char1, char2) << endl;

    return 0;
}
