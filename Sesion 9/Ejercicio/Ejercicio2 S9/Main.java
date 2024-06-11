abstract class Animales {
    abstract void Comer();
    abstract void Dormir();
    abstract void Moverse();
    
    void Simular() {
        Comer();
        Dormir();
        Moverse();
    }
}

class Mamifero extends Animales {
    void Comer() {
        System.out.println("El mamifero esta comiendo.");
    }

    void Dormir() {
        System.out.println("El mamifero esta durmiendo.");
    }

    void Moverse() {
        System.out.println("El mamifero esta corriendo.");
    }
}

class Ave extends Animales {
    void Comer() {
        System.out.println("El ave esta picoteando.");
    }

    void Dormir() {
        System.out.println("El ave esta durmiendo en su nido.");
    }

    void Moverse() {
        System.out.println("El ave esta volando.");
    }
}

class Reptil extends Animales {
    void Comer() {
        System.out.println("El reptil esta cazando.");
    }

    void Dormir() {
        System.out.println("El reptil esta durmiendo bajo una roca.");
    }

    void Moverse() {
        System.out.println("El reptil esta reptando.");
    }
}

class Anfibio extends Animales {
    void Comer() {
        System.out.println("El anfibio esta comiendo.");
    }

    void Dormir() {
        System.out.println("El anfibio esta durmiendo.");
    }

    void Moverse() {
        System.out.println("El anfibio esta desplazandose.");
    }
}

public class Main {
    static void simularComportamientos(Animales[] arrayAnimales) {
        for (Animales animal : arrayAnimales) {
            animal.Simular();
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Animales[] arrayAnimales = {new Mamifero(), new Ave(), new Reptil(), new Anfibio()};

        simularComportamientos(arrayAnimales);
    }
}
