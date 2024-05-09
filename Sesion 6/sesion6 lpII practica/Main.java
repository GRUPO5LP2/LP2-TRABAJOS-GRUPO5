import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Alumno {
    String nombre;
    int edad;
    float promedio;

    public Alumno(String nombre, int edad, float promedio) {
        this.nombre = nombre;
        this.edad = edad;
        this.promedio = promedio;
    }

    public String toString() {
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
        System.out.println("Promedio: " + promedio);
        return "";
    }

    public boolean compareTo(Alumno otro) {
        return this.promedio < otro.promedio;
    }
}

class Grupo {
    int cantidad;
    List<Alumno> alumnos;

    public Grupo(int cantidad) {
        this.cantidad = cantidad;
        this.alumnos = new ArrayList<>();
    }

    public String toString() {
        System.out.println("Hay " + cantidad + " alumnos, estos son:");
        for (Alumno alumno : alumnos) {
            System.out.println("Nombre: " + alumno.nombre);
            System.out.println("Edad: " + alumno.edad);
            System.out.println("Promedio: " + alumno.promedio);
        }
        return "";
    }

    public void agregar_alumno(String nombre, int edad, float promedio) {
        if (alumnos.size() < cantidad) {
            alumnos.add(new Alumno(nombre, edad, promedio));
            System.out.println("Alumno " + nombre + " agregado al grupo.");
        } else {
            System.out.println("El grupo está lleno, no se pudo agregar al alumno " + nombre + ".");
        }
    }

    public void ordena_por_promedios() {
        System.out.println("Antes de ordenar");
        for (int indice = 0; indice < alumnos.size(); indice++) {
            Alumno alumno = alumnos.get(indice);
            System.out.println("Índice: " + (indice + 1) + ", Nombre: " + alumno.nombre + ", Promedio: " + alumno.promedio);
        }
        
        Collections.sort(alumnos, (a, b) -> Float.compare(a.promedio, b.promedio));
        
        System.out.println("Después de ordenar");
        for (int indice = 0; indice < alumnos.size(); indice++) {
            Alumno alumno = alumnos.get(indice);
            System.out.println("Índice: " + (indice + 1) + ", Nombre: " + alumno.nombre + ", Promedio: " + alumno.promedio);
        }
    }

    public void promedio_grupo() {
        float suma = 0;
        for (Alumno alumno : alumnos) {
            suma += alumno.promedio;
        }
        System.out.println("El promedio de los promedios de los alumnos es: " + suma / cantidad);
    }

    public void mayor_promedio() {
        float mayor_promedio = alumnos.get(0).promedio;
        for (Alumno alumno : alumnos) {
            if (alumno.promedio > mayor_promedio) {
                mayor_promedio = alumno.promedio;
            }
        }
        System.out.println("El mayor promedio de todos los promedios es: " + mayor_promedio);
    }
}

public class Main {
    public static void main(String[] args) {
        Grupo grupo = new Grupo(5);
        grupo.agregar_alumno("Mauricio", 15, 15.5f);
        grupo.agregar_alumno("Ivan", 25, 16);
        grupo.agregar_alumno("Oscar", 18, 0.5f);
        grupo.agregar_alumno("Renzo", 19, 18);
        grupo.agregar_alumno("Sebastian", 19, 11.5f);
        grupo.agregar_alumno("Paolo", 19, 20);

        grupo.toString();
        grupo.promedio_grupo();
        grupo.mayor_promedio();
        grupo.ordena_por_promedios();
    }
}
