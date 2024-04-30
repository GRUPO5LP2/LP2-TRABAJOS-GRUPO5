#ifndef OTRACLASEEJEMPLO_H
#define OTRACLASEEJEMPLO_H

#include <iostream> // Se incluye la cabecera para usar cout

class OtraClaseEjemplo
{
private:
    int atributoEntero;
    char atributoChar;

public:
    // Método para mostrar los atributos
    void mostrar()
    {
        std::cout << "atributoEntero: " << atributoEntero << std::endl;
        std::cout << "atributoChar: " << atributoChar << std::endl;
    }
};

#endif
