class Animal {
    void hacerSonido() {
        System.out.println("El animal hace un sonido genérico.");
    }
}

class Perro extends Animal {
    void hacerSonido() {
        super.hacerSonido();  
        System.out.println("El perro ladra.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal = new Animal();
        Perro perro = new Perro();

        animal.hacerSonido();  
        perro.hacerSonido();   
    }
}

