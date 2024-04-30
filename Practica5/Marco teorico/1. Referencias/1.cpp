#include<iostream>
using namespace std;

int variableEntera = 0;
float variableFlotante = 0;
int& referenciaVariableEntera = variableEntera;
float& referenciaVariableFlotante = variableFlotante;

int main()
{
    cout << referenciaVariableEntera << endl;
    cout << referenciaVariableFlotante << endl;
    return 0;
}