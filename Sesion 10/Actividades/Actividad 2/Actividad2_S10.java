import java.util.ArrayList;
import java.util.List;

class Ruta {
    private static final int MAX_PARADAS = 10;
    private String nombre;
    private List<String> paradas;
    private int numParadas;

    public Ruta(String nombre) {
        this.nombre = nombre;
        this.paradas = new ArrayList<>();
        this.numParadas = 0;
    }

    public void agregarParada(String parada) {
        if (numParadas < MAX_PARADAS) {
            paradas.add(parada);
            numParadas++;
        } else {
            System.out.println("No se pueden agregar más paradas a la ruta " + nombre);
        }
    }

    public void mostrarRuta() {
        System.out.println("Ruta: " + nombre);
        for (String parada : paradas) {
            System.out.println("Parada: " + parada);
        }
    }

    public <T> void asignarVehiculo(T vehiculo) {
        System.out.println("Asignando vehículo " + vehiculo + " a la ruta " + nombre);
    }
}

class Entrega {
    private String destinatario;
    private String direccion;

    public Entrega(String destinatario, String direccion) {
        this.destinatario = destinatario;
        this.direccion = direccion;
    }

    public void mostrarEntrega() {
        System.out.println("Entrega para: " + destinatario + " en " + direccion);
    }

    public <T> void planificarHorario(T horario) {
        System.out.println("Planificando horario " + horario + " para la entrega a " + destinatario);
    }
}

public class Main {
    public static void main(String[] args) {
        Ruta ruta1 = new Ruta("Ruta 1");
        ruta1.agregarParada("Parada A");
        ruta1.agregarParada("Parada B");
        ruta1.mostrarRuta();
        ruta1.asignarVehiculo("Camión 123");

        Entrega entrega1 = new Entrega("Juan Perez", "Calle Falsa 123");
        entrega1.mostrarEntrega();
        entrega1.planificarHorario("10:00 AM");
    }
}
