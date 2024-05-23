#include <iostream>
#include <locale>
using namespace std;

class Reproductor {
public:
    virtual void reproducir() const = 0;
    virtual void pausar() const = 0;
    virtual void detener() const = 0;
};

class ReproductorMP3 : public Reproductor {
private:
    string dueno;
    int bateria;
public:
    ReproductorMP3(string d, int b) : Reproductor() {
        this->dueno = d;
        this->bateria = b;
    }

    void reproducir() const override {
        cout << "Reproduciendo mix del duko 🥵..." << endl;
    }

    void pausar() const override {
        cout << "Como lo vas a pausar al duko?! Pausando reproducción... " << endl;
    }

    void detener() const override {
        cout << "No lo saques al dukooooooo!! Deteniendo reproducción..." << endl;
    }
};

int main(){
    int opcion, bateria;
    string nombre;
    cout << "Ingrese su nombre:";
    cin >> nombre;
    cout << "Ingrese la bateria de su reproductor";
    cin >> bateria;
    ReproductorMP3 reproductor1(nombre, bateria);
    while (true) {
        cout << "Seleccione que acción desea tener con el Reproductor:" << endl;
        cout << "1. Reproducir musica" << endl;
        cout << "2. Pausar musica" << endl;
        cout << "3. Detener musica" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige tu opción: ";
        cin >> opcion;
        if (opcion == 4) {
            return 0;
        }
        if (opcion == 1) {
            reproductor1.reproducir();
        } else if (opcion == 2) {
            reproductor1.pausar();
        } else if (opcion == 3) {
            reproductor1.detener();
        }
    }
}

