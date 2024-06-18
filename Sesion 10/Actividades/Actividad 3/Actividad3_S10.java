import java.util.ArrayList;

class Ruta<T> {
    private static final int MAX_PARADAS = 10;
    private String nombre;
    private ArrayList<T> paradas;
    private int numParadas;

    public Ruta(String nombre) {
        this.nombre = nombre;
        this.paradas = new ArrayList<>();
        this.numParadas = 0;
    }

    public void agregarParada(T parada) {
        if (numParadas < MAX_PARADAS) {
            paradas.add(parada);
            numParadas++;
        } else {
            System.out.println("No se pueden agregar más paradas a la ruta " + nombre);
        }
    }

    public void mostrarRuta() {
        System.out.println("Ruta: " + nombre);
        for (T parada : paradas) {
            System.out.println("Parada: " + parada);
        }
    }

    public <V> void asignarVehiculo(V vehiculo) {
        System.out.println("Asignando vehículo " + vehiculo + " a la ruta " + nombre);
    }
}

class SistemaGestionRutas<T extends Ruta<?>> {
    private static final int MAX_RUTAS = 10;
    private ArrayList<T> rutas;
    private int numRutas;

    public SistemaGestionRutas() {
        this.rutas = new ArrayList<>();
        this.numRutas = 0;
    }

    public void agregarRuta(T ruta) {
        if (numRutas < MAX_RUTAS) {
            rutas.add(ruta);
            numRutas++;
        } else {
            System.out.println("No se pueden agregar más rutas al sistema");
        }
    }

    public void mostrarRutas() {
        for (T ruta : rutas) {
            ruta.mostrarRuta();
        }
    }

    public <V> void optimizarRecursos(V recurso) {
        System.out.println("Optimizando recurso: " + recurso);
    }

    public void generarInforme() {
        System.out.println("Generando informe del sistema de gestión de rutas...");
        mostrarRutas();
    }
}

public class Main {
    public static void main(String[] args) {
        Ruta<String> ruta1 = new Ruta<>("Ruta 1");
        ruta1.agregarParada("Parada A");
        ruta1.agregarParada("Parada B");

        Ruta<String> ruta2 = new Ruta<>("Ruta 2");
        ruta2.agregarParada("Parada X");
        ruta2.agregarParada("Parada Y");

        SistemaGestionRutas<Ruta<String>> sistema = new SistemaGestionRutas<>();
        sistema.agregarRuta(ruta1);
        sistema.agregarRuta(ruta2);

        sistema.mostrarRutas();
        sistema.optimizarRecursos("Camión 123");
        sistema.generarInforme();
    }
}
