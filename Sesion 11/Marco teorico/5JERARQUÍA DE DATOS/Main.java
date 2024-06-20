class Empleado {
    protected String nombre;
    protected int edad;

    public Empleado(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public void mostrarInformacion() {
        System.out.println("Nombre: " + nombre + ", Edad: " + edad);
    }
}

class Gerente extends Empleado {
    private int numeroDeEmpleados;

    public Gerente(String nombre, int edad, int numeroDeEmpleados) {
        super(nombre, edad);
        this.numeroDeEmpleados = numeroDeEmpleados;
    }

    @Override
    public void mostrarInformacion() {
        super.mostrarInformacion();
        System.out.println("Número de empleados a cargo: " + numeroDeEmpleados);
    }
}

class Ingeniero extends Empleado {
    private String especialidad;

    public Ingeniero(String nombre, int edad, String especialidad) {
        super(nombre, edad);
        this.especialidad = especialidad;
    }

    @Override
    public void mostrarInformacion() {
        super.mostrarInformacion();
        System.out.println("Especialidad: " + especialidad);
    }
}

public class Main {
    public static void main(String[] args) {
        Empleado empleado = new Empleado("Juan Perez", 30);
        Gerente gerente = new Gerente("Maria Gomez", 45, 10);
        Ingeniero ingeniero = new Ingeniero("Carlos Ruiz", 35, "Software");

        Empleado[] empleados = { empleado, gerente, ingeniero };

        for (Empleado emp : empleados) {
            emp.mostrarInformacion();
            System.out.println();
        }
    }
}
