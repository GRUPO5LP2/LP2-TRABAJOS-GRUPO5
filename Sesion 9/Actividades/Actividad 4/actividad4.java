abstract class Animal {
    public abstract void hacerSonido();
}

class Perro extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Wau Wau");
    }
}

class Gato extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Miau");
    }
}

class Vaca extends Animal {
    @Override
    public void hacerSonido() {
        System.out.println("Muuu");
    }
}

public class actividad4 {
    public static void main(String[] args) {
        Animal[] arrayAnimales = new Animal[10];
        Perro perrito = new Perro();
        Gato gatito = new Gato();
        Vaca vaquita = new Vaca();

        arrayAnimales[0] = perrito;
        arrayAnimales[1] = gatito;
        arrayAnimales[2] = vaquita;

        for (int i = 0; i < 3; i++) {
            arrayAnimales[i].hacerSonido();
        }
    }
}
