import java.util.Scanner;

abstract class Empleado {
    abstract void calcularSalario();
}

class EmpleadoTiempoCompleto extends Empleado {
    private String nombre;
    private int edad;

    public EmpleadoTiempoCompleto(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    @Override
    void calcularSalario() {
        System.out.println("El salario del empleado " + nombre + " tiene un salario de tiempo completo de: S/.2005");
    }
}

class EmpleadoMedioTiempo extends Empleado {
    private String nombre;
    private int edad;

    public EmpleadoMedioTiempo(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    @Override
    void calcularSalario() {
        System.out.println("El salario del empleado " + nombre + " tiene un salario de medio tiempo de: S/.1002.5");
    }
}

public class ejercicio4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int edad, opcion;
        String nombre;
        
        while (true) {
            System.out.println("Seleccione qué acción desea tener con el Empleado:");
            System.out.println("1. Crear empleado tiempo completo");
            System.out.println("2. Crear empleado medio tiempo");
            System.out.println("3. Salir");
            System.out.print("Elige tu opción: ");
            opcion = scanner.nextInt();
            
            if (opcion == 3) {
                break;
            }
            
            System.out.print("Ingrese su nombre: ");
            scanner.nextLine(); // Consumir el salto de línea pendiente
            nombre = scanner.nextLine();
            
            System.out.print("Ingrese su edad: ");
            edad = scanner.nextInt();
            
            switch (opcion) {
                case 1:
                    EmpleadoTiempoCompleto empleadoTC = new EmpleadoTiempoCompleto(nombre, edad);
                    empleadoTC.calcularSalario();
                    break;
                case 2:
                    EmpleadoMedioTiempo empleadoMT = new EmpleadoMedioTiempo(nombre, edad);
                    empleadoMT.calcularSalario();
                    break;
                default:
                    System.out.println("Opción no válida. Intente de nuevo.");
            }
        }
    }
}
