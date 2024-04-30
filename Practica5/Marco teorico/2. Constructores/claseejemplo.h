#ifndef CLASEEJEMPLO_H
#define CLASEEJEMPLO_H

#include <iostream> // Se incluye la cabecera para usar cout

class ClaseEjemplo
{
private:
    int atributoEntero;
    char atributoChar;

public:
    ClaseEjemplo(int i)
    {
        atributoEntero = i;
        atributoChar = ' ';
    }

    ClaseEjemplo(int i = 0, char c = ' ')
    {
        atributoEntero = i;
        atributoChar = c;
    }

    void mostrar()
    {
        std::cout << "atributoEntero: " << atributoEntero << std::endl;
        std::cout << "atributoChar: " << atributoChar << std::endl;
    }
};

#endif
