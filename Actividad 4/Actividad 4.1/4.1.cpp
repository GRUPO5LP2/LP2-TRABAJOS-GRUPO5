#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Libro {
    private:
        string titulo;
        string autor;
        bool prestamo;

    public:
        Libro(string _titulo, string _autor,bool _prestamo) : titulo(_titulo), autor(_autor), prestamo(_prestamo) {}

        void prestar() {
            if (prestamo == true) {
                cout << "El libro '" << titulo << "' ha sido prestado." << endl;
            } else {
                cout << "El libro '" << titulo << "' ya está prestado." << endl;
            }
        }

        void devolver() {
            if (prestamo == false) {
                cout << "El libro '" << titulo << "' ha sido devuelto." << endl;
            } else {
                cout << "El libro '" << titulo << "' ya está en la biblioteca." << endl;
            }
        }
    };

class Biblioteca {
    private:
        vector<Libro> libros;

    public:
        void prestarLibro(Libro& libro) {
            libro.prestar();
        }
};

int main() {
    Libro libro1("Libro A", "Autor A",false);
    Libro libro2("Libro B", "Autor B",true);

    Biblioteca biblioteca;

    biblioteca.prestarLibro(libro1);
    biblioteca.prestarLibro(libro2);

    libro1.prestar();
    libro2.prestar();

    libro1.devolver();
    libro2.devolver(); 

    return 0;
}
