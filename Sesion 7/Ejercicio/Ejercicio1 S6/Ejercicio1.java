// CLASE PADRE
class Vehiculo {
    protected String marca, modelo;
    protected int anio;
    protected double precio;

    public Vehiculo(String m, String mod, int a, double p) {
        marca = m;
        modelo = mod;
        anio = a;
        precio = p;
    }

    public void mostrarDatos() {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Año: " + anio);
        System.out.println("Precio: " + precio + " Soles.");
    }
}

// CLASES HIJOS
class Automovil extends Vehiculo {
    private int numPuertas;
    private String tipoCombustible;

    public Automovil(String m, String mod, int a, double p, int np, String tc) {
        super(m, mod, a, p);
        numPuertas = np;
        tipoCombustible = tc;
    }

    @Override
    public void mostrarDatos() {
        super.mostrarDatos();
        System.out.println("Número de puertas: " + numPuertas);
        System.out.println("Tipo de combustible: " + tipoCombustible);
    }
}

class Motocicleta extends Vehiculo {
    private int cilindrada;

    public Motocicleta(String m, String mod, int a, double p, int c) {
        super(m, mod, a, p);
        cilindrada = c;
    }

    @Override
    public void mostrarDatos() {
        super.mostrarDatos();
        System.out.println("Cilindrada: " + cilindrada);
    }
}

public class Main {
    public static void main(String[] args) {
        Automovil auto1 = new Automovil("Kia", "Rio", 2020, 60000, 4, "Gasolina");
        Motocicleta moto1 = new Motocicleta("Honda", "CRF450R", 2021, 45000, 450);

        System.out.println("Datos del Carro:");
        auto1.mostrarDatos();

        System.out.println("\nDatos de la Moto:");
        moto1.mostrarDatos();
    }
}