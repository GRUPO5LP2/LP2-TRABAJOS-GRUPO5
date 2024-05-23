class Animal {
    public String hacerSonido() {
        return "El animal hace un sonido.";
    }
}

class Perro extends Animal {
    @Override
    public String hacerSonido() {
        return "guau guau guau";
    }
}

class Gato extends Animal {
    @Override
    public String hacerSonido() {
        return "miau miau grrrr";
    }
}

class Vaca extends Animal {
    @Override
    public String hacerSonido() {
        return "muuu muuuu";
    }
}

public class Main {
    public static void main(String[] args) {
        Animal[] animales = { new Perro(), new Gato(), new Vaca() };

        for (Animal animal : animales) {
            System.out.println(animal.hacerSonido());
        }
    }
}
