import java.util.*;

class Animal {
    protected int edad;

    public Animal(int edad) {
        this.edad = edad;
    }

    public void mostrarEdad() {
        System.out.println("Edad del animal: " + edad + " años");
    }
}

class Perro extends Animal {
    public Perro(int edad) {
        super(edad);
    }

    public void mostrarEdadDelPerro() {
        System.out.println("Edad del perro: " + edad + " años");
    }
}

public class Main {
    public static void main(String[] args) {
        Perro miPerro = new Perro(5);
        miPerro.mostrarEdadDelPerro();
    }
}
