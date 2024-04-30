#include <iostream>
using namespace std;
class Clase
{
    int variableEntera;
    float variableFlotante;
    public:
        Clase(){
            variableEntera = 0;
            variableFlotante = 0;
        }
    int getVariableEntera(){
        return this -> variableEntera;
    }
    float getVariableFlotante(){
        return this -> variableFlotante;
    }
    };
    
int main(){
    Clase objeto;
        cout << objeto.getVariableEntera() << endl;
        cout << objeto.getVariableFlotante() << endl;
        system("pause");
    return 0;
}
