import java.util.ArrayList;
import java.util.List;

class Tarea {
    private String nombreTarea;
    private String descripcionTarea;
    private boolean estado;
    private String diaLimite;

    public Tarea(String nombreTarea, String descripcionTarea, String diaLimite) {
        this.nombreTarea = nombreTarea;
        this.descripcionTarea = descripcionTarea;
        this.estado = false;
        this.diaLimite = diaLimite;
    }

    public String obtenerNombreTarea() { return nombreTarea; }
    public String obtenerDescripcionTarea() { return descripcionTarea; }
    public boolean obtenerEstado() { return estado; }
    public void marcarComoCompletada() { estado = true; }
    public String obtenerDiaLimite() { return diaLimite; }
}

interface ITareaManager {
    void agregarTarea(Tarea tarea);
    void completarTarea(int indice);
    List<Tarea> obtenerTodasLasTareas();
}

class GestorTareas implements ITareaManager {
    private List<Tarea> tareas = new ArrayList<>();

    @Override
    public void agregarTarea(Tarea tarea) {
        tareas.add(tarea);
    }

    @Override
    public void completarTarea(int indice) {
        if (indice >= 0 && indice < tareas.size()) {
            tareas.get(indice).marcarComoCompletada();
        }
    }

    @Override
    public List<Tarea> obtenerTodasLasTareas() {
        return new ArrayList<>(tareas);
    }
}

class InterfazUsuario {
    public static void mostrarTarea(Tarea tarea) {
        System.out.println("Nombre de la Tarea: " + tarea.obtenerNombreTarea());
        System.out.println("Descripción de la Tarea: " + tarea.obtenerDescripcionTarea());
        System.out.println("Día Límite: " + tarea.obtenerDiaLimite());
        System.out.println("Estado: " + (tarea.obtenerEstado() ? "Completada" : "Incompleta"));
        System.out.println("-----------------------");
    }
}

public class Main {
    public static void main(String[] args) {
        GestorTareas gestorTareas = new GestorTareas();

        // Agregar algunas tareas con fechas límite
        gestorTareas.agregarTarea(new Tarea("Hacer la compra", "Comprar leche y pan", "Lunes"));
        gestorTareas.agregarTarea(new Tarea("Estudiar para el examen", "Repasar los apuntes", "Viernes"));

        // Obtener todas las tareas y mostrarlas en la interfaz
        List<Tarea> todasLasTareas = gestorTareas.obtenerTodasLasTareas();
        for (Tarea tarea : todasLasTareas) {
            InterfazUsuario.mostrarTarea(tarea);
        }
    }
}


