abstract class Animal {
    abstract void hacerSonido();

    void comer() {
        System.out.println("Este animal está comiendo.");
    }
}

class Perro extends Animal {
    @Override
    void hacerSonido() {
        System.out.println("Guau");
    }
}

class Gato extends Animal {
    @Override
    void hacerSonido() {
        System.out.println("Miau");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal perro = new Perro();
        Animal gato = new Gato();

        perro.hacerSonido();
        perro.comer();

        gato.hacerSonido();
        gato.comer();
    }
}