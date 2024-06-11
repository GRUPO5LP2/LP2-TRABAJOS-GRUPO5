import java.util.Scanner;

abstract class Empleado {
    private String nombre;
    private int edad;
    private int DNI;
    private String puesto;

    public Empleado(String n, int e, int D, String p) {
        this.nombre = n;
        this.edad = e;
        this.DNI = D;
        this.puesto = p;
    }

    public abstract double calcularSalario();
}

class Asalariados extends Empleado {
    private double salario;

    public Asalariados(String n, int e, int D, String p, double s) {
        super(n, e, D, p);
        this.salario = s;
    }

    public double calcularSalario() {
        return salario;
    }
}

class PorHora extends Empleado {
    private int horas;
    private double pagoxhora;

    public PorHora(String n, int e, int D, String p, int h, double pxh) {
        super(n, e, D, p);
        this.horas = h;
        this.pagoxhora = pxh;
    }

    public double calcularSalario() {
        return horas * pagoxhora;
    }
}

class Comisionistas extends Empleado {
    private double ventas;
    private double comision;

    public Comisionistas(String n, int e, int D, String p, double v, double c) {
        super(n, e, D, p);
        this.ventas = v;
        this.comision = c;
    }

    public double calcularSalario() {
        return ventas * comision;
    }
}

public class ejercicio3 {
    static Scanner scanner = new Scanner(System.in);

    public static int menu() {
        System.out.println("====== MENU EMPLEADOS ======");
        System.out.println("1. Crear empleado Asalariado");
        System.out.println("2. Crear empleado PorHora");
        System.out.println("3. Crear empleado Comisionistas");
        System.out.println("4. Salir");
        System.out.print("Ingresa tu opción: ");
        return scanner.nextInt();
    }

    public static void pausaYLimpiar() {
        scanner.nextLine(); // Consume the newline character
        System.out.print("Presiona Enter para continuar...");
        scanner.nextLine(); // Pause
        System.out.print("\033[H\033[2J");  // Clear console in Unix/Linux
        System.out.flush();  // Flush the stream
    }

    public static void main(String[] args) {
        int opcion, edad, DNI, horas, cont = 0;
        String nombre, puesto, decision;
        double salario, pagoxhora, ventas, comision;
        Empleado[] arrayEmpleados = new Empleado[100];

        while (true) {
            opcion = menu();
            if (opcion == 1) {
                System.out.print("Ingrese el nombre del empleado Asalariado: ");
                nombre = scanner.next();
                System.out.print("Ingrese la edad del empleado Asalariado: ");
                edad = scanner.nextInt();
                System.out.print("Ingrese el DNI del empleado Asalariado: ");
                DNI = scanner.nextInt();
                System.out.print("Ingrese el puesto de trabajo del empleado Asalariado: ");
                puesto = scanner.next();
                System.out.print("Ingrese el salario del empleado Asalariado: ");
                salario = scanner.nextDouble();
                arrayEmpleados[cont] = new Asalariados(nombre, edad, DNI, puesto, salario);
                System.out.print("¿Deseas saber el sueldo del empleado " + nombre + "? (SI/NO): ");
                decision = scanner.next();
                if (decision.equalsIgnoreCase("SI")) {
                    System.out.println("El salario del empleado " + nombre + " es: " + arrayEmpleados[cont].calcularSalario() + " soles.");
                }
                cont++;
                pausaYLimpiar();
            } else if (opcion == 2) {
                System.out.print("Ingrese el nombre del empleado PorHora: ");
                nombre = scanner.next();
                System.out.print("Ingrese la edad del empleado PorHora: ");
                edad = scanner.nextInt();
                System.out.print("Ingrese el DNI del empleado PorHora: ");
                DNI = scanner.nextInt();
                System.out.print("Ingrese el puesto de trabajo del empleado PorHora: ");
                puesto = scanner.next();
                System.out.print("Ingrese las horas de trabajo del empleado PorHora: ");
                horas = scanner.nextInt();
                System.out.print("Ingrese el pago por hora del empleado PorHora: ");
                pagoxhora = scanner.nextDouble();
                arrayEmpleados[cont] = new PorHora(nombre, edad, DNI, puesto, horas, pagoxhora);
                System.out.print("¿Deseas saber el sueldo del empleado " + nombre + "? (SI/NO): ");
                decision = scanner.next();
                if (decision.equalsIgnoreCase("SI")) {
                    System.out.println("El salario del empleado " + nombre + " es: " + arrayEmpleados[cont].calcularSalario() + " soles.");
                }
                cont++;
                pausaYLimpiar();
            } else if (opcion == 3) {
                System.out.print("Ingrese el nombre del empleado Comisionista: ");
                nombre = scanner.next();
                System.out.print("Ingrese la edad del empleado Comisionista: ");
                edad = scanner.nextInt();
                System.out.print("Ingrese el DNI del empleado Comisionista: ");
                DNI = scanner.nextInt();
                System.out.print("Ingrese el puesto de trabajo del empleado Comisionista: ");
                puesto = scanner.next();
                System.out.print("Ingrese la tasa de comisión del empleado Comisionista: ");
                comision = scanner.nextDouble();
                System.out.print("Ingrese el total de ventas del empleado Comisionista (EN DINERO): ");
                ventas = scanner.nextDouble();
                arrayEmpleados[cont] = new Comisionistas(nombre, edad, DNI, puesto, ventas, comision);
                System.out.print("¿Deseas saber el sueldo del empleado " + nombre + "? (SI/NO): ");
                decision = scanner.next();
                if (decision.equalsIgnoreCase("SI")) {
                    System.out.println("El salario del empleado " + nombre + " es: " + arrayEmpleados[cont].calcularSalario() + " soles.");
                }
                cont++;
                pausaYLimpiar();
            } else {
                return;
            }
        }
    }
}
