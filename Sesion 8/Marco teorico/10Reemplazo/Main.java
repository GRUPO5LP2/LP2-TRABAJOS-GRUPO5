class Animal {
    void hacerSonido() {
        System.out.println("El animal hace un sonido.");
    }
}

class Perro extends Animal {
    void hacerSonido() {
        System.out.println("El perro ladra.");
    }
}

class Gato extends Animal {
    void hacerSonido() {
        System.out.println("El gato maúlla.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal;
        Perro miPerro = new Perro();
        Gato miGato = new Gato();

        animal = miPerro;
        animal.hacerSonido(); 
        animal = miGato;
        animal.hacerSonido();  
    }
}
