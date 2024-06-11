#include <iostream>
#include <cmath>
using namespace std;

class FiguraGeometrica{
public:
    virtual double area() = 0;
    virtual double perimetro() = 0;
};

class Circulo: public FiguraGeometrica{
public:
    double radio;
    double const PI=3.1416;
    
    Circulo(double r):radio(r){}

    double area() override{
        return PI*radio*radio;
    };

    double perimetro() override{
        return 2*PI*radio;
    }
};

class Rectangulo: public FiguraGeometrica{
public:
    double base;
    double altura;
    
    Rectangulo(double b, double a):base(b),altura(a) {}

    double area() override{
        return base*altura;
    };

    double perimetro() override{
        return 2*altura+2*base;
    }
};

class Triangulo: public FiguraGeometrica{
public:
    double ladoa;
    double ladob;
    double ladoc;
    double base;
    double altura;
    bool esRectangulo;
    
    Triangulo(double a, double b, double c):ladoa(a),ladob(b),ladoc(c),base(0),altura(0),esRectangulo(false) {}
    Triangulo(double b, double a):base(b), altura(a), esRectangulo(true),ladoa(0),ladob(0),ladoc(0) {}

    double area() override{
        if(esRectangulo){
            return base*altura/2;
        } else{
            double p=(ladoa+ladob+ladoc)/2;
            double area=sqrt(p*(p-ladoa)*(p-ladob)*(p-ladoc));
            return area;
        }
    };

    double perimetro() override{
        if(esRectangulo){
            return base+altura+(sqrt(altura+altura+base*base));
        } else{
            return ladoa+ladob+ladoc;
        }
    };
};

int main(){
    FiguraGeometrica* circulito = new Circulo(17);
    FiguraGeometrica* rectangulito = new Rectangulo(12,15);
    FiguraGeometrica* triangulito = new Triangulo(4,3,2);
    FiguraGeometrica* tringulitoRectangulito = new Triangulo(3,2);

    FiguraGeometrica* arreglodefiguraspro[4];
    arreglodefiguraspro[0]= circulito;
    arreglodefiguraspro[1]= rectangulito;
    arreglodefiguraspro[2]= triangulito;
    arreglodefiguraspro[3]= tringulitoRectangulito;

    for (int i=0; i<4; i++){
        cout<< "El área es: "<<arreglodefiguraspro[i]->area()<<" u^2."<<endl;
        cout<< "El Peimerto es: "<<arreglodefiguraspro[i]->perimetro()<<" u."<<endl;
    }



}