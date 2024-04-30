import java.util.ArrayList;
import java.util.List;

class Empleado {
    private String nombre;
    private int salario;

    public Empleado(String nombre, int salario) {
        this.nombre = nombre;
        this.salario = salario;
    }

    public String obtenerNombre() {
        return nombre;
    }

    public int obtenerSalario() {
        return salario;
    }
}

class Empresa {
    private List<Empleado> empleados;

    public Empresa() {
        this.empleados = new ArrayList<>();
    }

    public void contratarEmpleado(Empleado empleado) {
        empleados.add(empleado);
    }

    public List<Empleado> obtenerEmpleados() {
        return empleados;
    }
}

public class Main {
    public static void main(String[] args) {
        Empresa miEmpresa = new Empresa();

        miEmpresa.contratarEmpleado(new Empleado("Juan", 3000));
        miEmpresa.contratarEmpleado(new Empleado("María", 3500));

        List<Empleado> listaEmpleados = miEmpresa.obtenerEmpleados();

        System.out.println("Empleados de la empresa:");
        for (Empleado empleado : listaEmpleados) {
            System.out.println("Nombre: " + empleado.obtenerNombre() + ", Salario: $" + empleado.obtenerSalario());
        }
    }
}
