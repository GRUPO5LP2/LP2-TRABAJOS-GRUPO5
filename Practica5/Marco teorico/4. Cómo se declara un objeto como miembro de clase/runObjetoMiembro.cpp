#include "otraclase.h"
#include "unaclase.h"
#include <iostream>
using namespace std;
int main()
{
    otraClase objOtraClase(6,9);
    unaClase objUnaClase(5,6,objOtraClase);
    cout << objOtraClase << endl;
    cout << objUnaClase << endl;
    system("pause");
    return 0;
}
