import java.util.ArrayList;
import java.util.Collections;

class Alumno implements Comparable<Alumno> {
    String nombre;
    int edad;
    float promedio;

    public Alumno(String nombre, int edad, float promedio) {
        this.nombre = nombre;
        this.edad = edad;
        this.promedio = promedio;
    }

    @Override
    public int compareTo(Alumno otro) {
        return Float.compare(this.promedio, otro.promedio);
    }

    @Override
    public String toString() {
        return "Nombre: " + nombre + "\nEdad: " + edad + "\nPromedio: " + promedio + "\n";
    }
}

class Grupo {
    int cantidad;
    ArrayList<Alumno> alumnos = new ArrayList<>();

    public Grupo(int cantidad) {
        this.cantidad = cantidad;
    }

    public void agregarAlumno(String nombre, int edad, float promedio) {
        if (alumnos.size() < cantidad) {
            alumnos.add(new Alumno(nombre, edad, promedio));
            System.out.println("Alumno " + nombre + " agregado al grupo.");
        } else {
            System.out.println("El grupo está lleno, no se pudo agregar al alumno " + nombre + ".");
        }
    }

    public void ordenarPorPromedios() {
        Collections.sort(alumnos);
    }

    public void promedioGrupo() {
        float suma = 0;
        for (Alumno alumno : alumnos) {
            suma += alumno.promedio;
        }
        System.out.println("El promedio de los promedios de los alumnos es: " + suma / cantidad);
    }

    public void mayorPromedio() {
        float mayor = 0;
        for (Alumno alumno : alumnos) {
            if (alumno.promedio > mayor) {
                mayor = alumno.promedio;
            }
        }
        System.out.println("El mayor promedio de todos los promedios es: " + mayor);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Hay ").append(cantidad).append(" alumnos, estos son:\n");
        for (Alumno alumno : alumnos) {
            sb.append(alumno);
        }
        return sb.toString();
    }
}

public class Main {
    public static void main(String[] args) {
        Grupo grupo = new Grupo(5);
        grupo.agregarAlumno("Mauricio", 15, 15.5f);
        grupo.agregarAlumno("Ivan", 25, 16);
        grupo.agregarAlumno("Oscar", 18, 0.5f);
        grupo.agregarAlumno("Renzo", 19, 18);
        grupo.agregarAlumno("Sebastian", 19, 11.5f);
        grupo.agregarAlumno("Paolo", 19, 20);
        System.out.println(grupo);
        grupo.promedioGrupo();
        grupo.mayorPromedio();
    }
}
