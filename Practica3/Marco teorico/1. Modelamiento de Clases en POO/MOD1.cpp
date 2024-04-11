#include <iostream>
using namespace std;


class Persona
{
private:
   int edad;
   string nombre;
   public:
Persona(int edad, string nombre)
{
   this->edad = edad;
   this->nombre = nombre;
}
int getEdad()
{
   return this->edad;
}
string getNombre()
{
   return this->nombre;
}
};
