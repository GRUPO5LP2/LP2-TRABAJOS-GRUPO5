abstract class Animal {
    abstract void hacersonido();

    void comer() {
        System.out.println("Esta comiendo");
    }
}

class Perro extends Animal {
    @Override
    void hacersonido() {
        System.out.println("Woof");
    }
}

public class Main {
    public static void main(String[] args) {
        Perro perro1 = new Perro();
        perro1.hacersonido();
        perro1.comer();
    }
}
