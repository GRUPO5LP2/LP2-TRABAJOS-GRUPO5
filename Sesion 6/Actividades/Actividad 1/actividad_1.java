import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Estudiante implements Comparable<Estudiante> {
    private String nombre;
    private int edad;
    private List<Double> notas;

    public Estudiante(String nombre, int edad, List<Double> notas) {
        this.nombre = nombre;
        this.edad = edad;
        this.notas = notas;
    }

    public double calcularPromedio() {
        double suma = 0;
        for (double nota : notas) {
            suma += nota;
        }
        return suma / notas.size();
    }

    public String getNombre() {
        return nombre;
    }

    public int getEdad() {
        return edad;
    }

    @Override
    public int compareTo(Estudiante otroEstudiante) {
        return Double.compare(otroEstudiante.calcularPromedio(), this.calcularPromedio());
    }
}

public class Main {
    public static void ordenarPorPromedio(List<Estudiante> estudiantes) {
        Collections.sort(estudiantes);
    }

    public static void main(String[] args) {
        List<Estudiante> estudiantes = new ArrayList<>();
        estudiantes.add(new Estudiante("Melgar", 20, List.of(13.0, 12.0, 15.0)));
        estudiantes.add(new Estudiante("Tilin", 22, List.of(19.0, 20.0, 16.0)));
        estudiantes.add(new Estudiante("Alianza Lima", 21, List.of(15.0, 17.0, 14.0)));

        ordenarPorPromedio(estudiantes);
        for (int i = 0; i < estudiantes.size(); i++) {
            Estudiante estudiante = estudiantes.get(i);
            System.out.println("Puesto Numero " + (i + 1) + " de " + estudiante.getNombre());
            System.out.println("Edad: " + estudiante.getEdad());
            System.out.println("Notas: " + estudiante.calcularPromedio() + "\n");
        }
    }
}
