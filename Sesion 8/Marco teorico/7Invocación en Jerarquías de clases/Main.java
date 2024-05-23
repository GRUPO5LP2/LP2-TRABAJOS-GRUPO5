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
        Animal miAnimal;
        Perro miPerro = new Perro();
        Gato miGato = new Gato();

        miAnimal = miPerro;
        miAnimal.hacerSonido(); 

        miAnimal = miGato;
        miAnimal.hacerSonido(); 
    }
}
