class Animal {
    public void hacerSonido() {
        System.out.println("Sonido genérico de animal");
    }
}


class Perro extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Guau!");
    }
}


class Gato extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Miau!");
    }
}


public class Main {
    public static void main(String[] args) {
        Animal animal1 = new Perro();
        Animal animal2 = new Gato();


        animal1.hacerSonido(); // Guau!
        animal2.hacerSonido(); // Miau!
    }
}
