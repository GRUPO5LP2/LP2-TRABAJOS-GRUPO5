class Animal {
    public void hacerSonido() {
        System.out.println("Sonido genérico de animal");
    }

    public void mostrarNombre(String nombre) {
        System.out.println("Animal: " + nombre);
    }
}

class Perro extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Guau!");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal1 = new Perro();
        animal1.hacerSonido();       // Llama a la versión redefinida (Guau!)
        animal1.mostrarNombre("Fido"); // Llama a la versión de la clase base
    }
}
