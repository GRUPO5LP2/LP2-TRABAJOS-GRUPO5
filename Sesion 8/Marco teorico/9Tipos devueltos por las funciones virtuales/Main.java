class Animal {
    Animal clonar() {
        return new Animal();
    }

    void hacerSonido() {
        System.out.println("El animal hace un sonido.");
    }
}

class Perro extends Animal {
    Perro clonar() {
        return new Perro();
    }

    void hacerSonido() {
        System.out.println("El perro ladra.");
    }
}

class Gato extends Animal {
    Gato clonar() {
        return new Gato();
    }

    void hacerSonido() {
        System.out.println("El gato maúlla.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal = new Animal();
        Animal perro = new Perro();
        Animal gato = new Gato();

        Animal animalClonado = animal.clonar();
        Animal perroClonado = ((Perro) perro).clonar();
        Animal gatoClonado = ((Gato) gato).clonar();

        animalClonado.hacerSonido();
        perroClonado.hacerSonido();   
        gatoClonado.hacerSonido();   
    }
}
