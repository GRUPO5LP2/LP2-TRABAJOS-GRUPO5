import java.util.*;

class Vehiculo {
    protected int ruedas;

    public Vehiculo(int n_ruedas) {
        this.ruedas = n_ruedas;
    }

    public void info() {
        System.out.println("Este vehículo tiene " + ruedas + " ruedas.");
    }
}

class Automovil extends Vehiculo {
    private int puertas;

    public Automovil(int n_ruedas, int n_puertas) {
        super(n_ruedas);
        this.puertas = n_puertas;
    }

    public void info() {
        super.info();
        System.out.println("Este automóvil tiene " + puertas + " puertas.");
    }
}

public class Main {
    public static void main(String[] args) {
        Automovil a = new Automovil(4, 2);
        a.info();
    }
}
