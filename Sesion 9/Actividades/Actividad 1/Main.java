class Animal {
    public void hacerSonido() {
        System.out.println("Sonido de Animal.mp4");
    }
}

class Perro extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Waos");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal = new Perro();
        animal.hacerSonido(); 
    }
}
