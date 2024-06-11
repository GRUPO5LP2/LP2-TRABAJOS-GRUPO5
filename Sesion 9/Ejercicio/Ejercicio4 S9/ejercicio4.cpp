#include <iostream>
using namespace std;

class Personajes {
    private:
        string nombre;
        int edad;
        string arma;
        string habilidadespecial;
    public:
        Personajes(string n, int e, string a, string he) : nombre(n), edad(e), arma(a), habilidadespecial(he) {}
        virtual void atacar() = 0;
        virtual void defender() = 0;
        virtual void habilidadEspecial() = 0;
        
        string getNombre() const { return nombre; }
        int getEdad() const { return edad; }
        string getArma() const { return arma; }
        string getHabilidadEspecial() const { return habilidadespecial; }
};

class Guerreros : public Personajes {
    public:
        Guerreros(string n, int e, string a, string he) : Personajes(n, e, a, he) {}
        void atacar() override {
            cout << "El guerrero " << getNombre() << " te ataca con su " << getArma() << "!!" << endl;
        }
        void defender() override {
            cout << "El guerrero " << getNombre() << " se defiende!" << endl;
        }
        void habilidadEspecial() override {
            cout << "El guerrero " << getNombre() << " lanza su habilidad especial " << getHabilidadEspecial() << "!!" << endl;
        }
};

class Magos : public Personajes {
    private:
        string elemento;
    public:
        Magos(string n, int e, string a, string he, string elem) : Personajes(n, e, a, he), elemento(elem) {}
        void atacar() override {
            cout << "El mago " << getNombre() << " te ataca con su " << getArma() << "!!" << endl;
        }
        void defender() override {
            cout << "El mago " << getNombre() << " se defiende!" << endl;
        }
        void habilidadEspecial() override {
            cout << "El mago " << getNombre() << " lanza su habilidad especial " << getHabilidadEspecial() << "!!" << endl;
        }
};

class Arqueros : public Personajes {
    private:
        string tipoflecha;
    public:
        Arqueros(string n, int e, string a, string he, string tf) : Personajes(n, e, a, he), tipoflecha(tf) {}
        void atacar() override {
            cout << "El arquero " << getNombre() << " te ataca con su " << getArma() << "!!" << endl;
        }
        void defender() override {
            cout << "El arquero " << getNombre() << " se defiende!" << endl;
        }
        void habilidadEspecial() override {
            cout << "El arquero " << getNombre() << " lanza su habilidad especial " << getHabilidadEspecial() << "!!" << endl;
        }
};

void limpiarPantalla() {
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}

int menu() {
    int opc;
    cout << "====== MENU PERSONAJES ======" << endl;
    cout << "1. Crear Guerrero" << endl;
    cout << "2. Crear Mago" << endl;
    cout << "3. Crear Arquero" << endl;
    cout << "4. Salir " << endl;
    cout << "Ingresa tu opción: ";
    cin >> opc;
    return opc;
}

int menu_metodos() {
    int opc;
    cout << "====== MENU METODOS ======" << endl;
    cout << "1. Atacar!" << endl;
    cout << "2. Defenderse!" << endl;
    cout << "3. Lanzar habilidad especial!" << endl;
    cout << "4. Salir " << endl;
    cout << "Ingresa tu opción: ";
    cin >> opc;
    return opc;
}

int main() {
    int opcion, edad;
    string nombre, arma, habilidadespecial, elemento, tipoflecha;
    int cont = 0;
    Personajes* array_personajes[100];
    while (true) {
        limpiarPantalla();
        opcion = menu();
        if (opcion == 1) {
            limpiarPantalla();
            cout << "Ingrese el nombre del Guerrero: ";
            cin >> nombre;
            cout << "Ingrese la edad del Guerrero: ";
            cin >> edad;
            cout << "Ingrese el arma del Guerrero: ";
            cin >> arma;
            cout << "Ingrese la habilidad especial del Guerrero: ";
            cin >> habilidadespecial;
            array_personajes[cont] = new Guerreros(nombre, edad, arma, habilidadespecial);
            while (true) {
                limpiarPantalla();
                opcion = menu_metodos();
                if (opcion == 1) {
                    array_personajes[cont]->atacar();
                } else if (opcion == 2) {
                    array_personajes[cont]->defender();
                } else if (opcion == 3) {
                    array_personajes[cont]->habilidadEspecial();
                } else {
                    break;
                }
                cout << "Presiona enter para continuar...";
                cin.ignore().get(); 
            }
            cont += 1;
        } else if (opcion == 2) {
            limpiarPantalla();
            cout << "Ingrese el nombre del Mago: ";
            cin >> nombre;
            cout << "Ingrese la edad del Mago: ";
            cin >> edad;
            cout << "Ingrese el arma del Mago: ";
            cin >> arma;
            cout << "Ingrese la habilidad especial del Mago: ";
            cin >> habilidadespecial;
            cout << "Ingrese el elemento del Mago: ";
            cin >> elemento;
            array_personajes[cont] = new Magos(nombre, edad, arma, habilidadespecial, elemento);
            while (true) {
                limpiarPantalla();
                opcion = menu_metodos();
                if (opcion == 1) {
                    array_personajes[cont]->atacar();
                } else if (opcion == 2) {
                    array_personajes[cont]->defender();
                } else if (opcion == 3) {
                    array_personajes[cont]->habilidadEspecial();
                } else {
                    break;
                }
                cout << "Presiona enter para continuar...";
                cin.ignore().get();
            }
            cont += 1;
        } else if (opcion == 3) {
            limpiarPantalla();
            cout << "Ingrese el nombre del Arquero: ";
            cin >> nombre;
            cout << "Ingrese la edad del Arquero: ";
            cin >> edad;
            cout << "Ingrese el arma del Arquero: ";
            cin >> arma;
            cout << "Ingrese la habilidad especial del Arquero: ";
            cin >> habilidadespecial;
            cout << "Ingrese el tipo de flecha que usa el Arquero: ";
            cin >> tipoflecha;
            array_personajes[cont] = new Arqueros(nombre, edad, arma, habilidadespecial, tipoflecha);
            while (true) {
                limpiarPantalla();
                opcion = menu_metodos();
                if (opcion == 1) {
                    array_personajes[cont]->atacar();
                } else if (opcion == 2) {
                    array_personajes[cont]->defender();
                } else if (opcion == 3) {
                    array_personajes[cont]->habilidadEspecial();
                } else {
                    break;
                }
                cout << "Presiona enter para continuar...";
                cin.ignore().get();
            }
            cont += 1;
        } else {
            return 0;
        }
    }
}
