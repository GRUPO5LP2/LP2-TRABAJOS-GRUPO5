#include <iostream>
using namespace std;
class Animal{
public:
 virtual void comer(){
   cout << "El animal está comiendo." << endl;
 }
};




class Mamifero : public Animal{
public:
 virtual void amamantar(){
   cout << "El mamífero está amamantando." << endl;
 }
};




class Ave : public Animal{
public:
 virtual void volar(){
   cout << "El ave está volando." << endl;
 }
};




class Perro : public Mamifero {
public:
 virtual void ladrar() {
 cout << "El perro está ladrando." << endl;
 }
};




class Pajaro : public Ave{
public:
 virtual void cantar(){
   cout << "El pájaro está cantando." << endl;
 }
};

int main()
{
   Animal* animal1 = new Animal();
   Mamifero* mamifero1 = new Mamifero();
   Ave* ave1 = new Ave();
   Perro* perro1 = new Perro();
   Pajaro* pajaro1 = new Pajaro();
   animal1->comer();
   mamifero1->comer();
   mamifero1->amamantar();
   ave1->comer();
   ave1->volar();
   perro1->comer();
   perro1->amamantar(); // Esto no tiene sentido en un perro
   perro1->ladrar();
   pajaro1->comer();
   pajaro1->volar();
   pajaro1->cantar();
   delete animal1;
   delete mamifero1;
   delete ave1;
   delete perro1;
   delete pajaro1;
return 0;
}
