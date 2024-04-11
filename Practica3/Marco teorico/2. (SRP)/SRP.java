import java.math.*;

class Empleado {
    private String nombre;
    private int edad;
    private String direccion;

    public Empleado(String nombre, int edad, String direccion) {
        this.nombre = nombre;
        this.edad = edad;
        this.direccion = direccion;
    }

    public void mostrarInformacionPersonal() {
        System.out.println("Nombre: " + this.nombre);
        System.out.println("Edad: " + this.edad);
        System.out.println("Dirección: " + this.direccion);
    }
}

class Salario {
    private double salarioBase;
    private double bonificaciones;

    public Salario(double salarioBase, double bonificaciones) {
        this.salarioBase = salarioBase;
        this.bonificaciones = bonificaciones;
    }

    public double calcularSalarioTotal() {
        return this.salarioBase + this.bonificaciones;
    }
}

class Proyecto {
    private String nombreProyecto;
    private String descripcion;

    public Proyecto(String nombreProyecto, String descripcion) {
        this.nombreProyecto = nombreProyecto;
        this.descripcion = descripcion;
    }

    public void mostrarInformacionProyecto() {
        System.out.println("Nombre del proyecto: " + this.nombreProyecto);
        System.out.println("Descripción: " + this.descripcion);
    }
}

public class Main {
    public static void main(String[] args) {
        Empleado emp1 = new Empleado("Juan Perez", 25, "Av. Puente Chilina 123");
        emp1.mostrarInformacionPersonal();

        Salario sal1 = new Salario(1000, 200);
        System.out.println("Salario total: $" + sal1.calcularSalarioTotal());

        ArrayList<Proyecto> proyectos = new ArrayList<>();
        proyectos.add(new Proyecto("Proyecto 1", "Desarrollo de software"));
        proyectos.add(new Proyecto("Proyecto 2", "Implementación de redes"));

        for (Proyecto p : proyectos) {
            p.mostrarInformacionProyecto();
        }
    }
}

