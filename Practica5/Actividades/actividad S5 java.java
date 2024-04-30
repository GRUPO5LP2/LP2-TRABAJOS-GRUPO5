import java.lang.String;

class Persona {
    private String nombre;
    private int edad;

    public Persona(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
        System.out.println("Se creo a la persona : " + this.nombre + ", con: " + this.edad + " años");
    }

    public Persona() {
    }

    protected void finalize() {
        System.out.println("Persona Borrada: " + this.nombre);
    }

    public String getNombre() {
        return this.nombre;
    }

    public int getEdad() {
        return this.edad;
    }
}

class Direccion {
    private String calle;
    private int numero;

    public Direccion(String calle, int numero) {
        this.calle = calle;
        this.numero = numero;
        System.out.println("Se Creo la CASA en: " + this.calle + ", con el número: " + this.numero);
    }

    protected void finalize() {
        System.out.println("Casa demolida: " + this.calle + " " + this.numero);
    }

    public String getCalle() {
        return this.calle;
    }

    public int getNumero() {
        return this.numero;
    }
}

class EstudianteUniversitario {
    private Persona persona;
    private String universidad;
    private Direccion direccion;

    public EstudianteUniversitario(String nombre, int edad, String universidad, String calle, int numero) {
        this.persona = new Persona(nombre, edad);
        this.universidad = universidad;
        this.direccion = new Direccion(calle, numero);
        System.out.println("Nuevo estudiante universitario nombre: " + this.persona.getNombre() + ", edad:"
                + this.persona.getEdad() + " años, su uni es: " + this.universidad);
    }

    protected void finalize() {
        System.out.println("Estudiante universitario: " + this.persona.getNombre() + ", Abandono la uni: " + this.universidad);
    }

    public String getNombrePersona() {
        return this.persona.getNombre();
    }

    public int getEdadPersona() {
        return this.persona.getEdad();
    }

    public String getUniversidad() {
        return this.universidad;
    }

    public Direccion getDireccion() {
        return this.direccion;
    }
}

public class Main {
    public static void main(String[] args) {
        EstudianteUniversitario estudiante = new EstudianteUniversitario("Iván Reaño", 20, "Universidad Sideral Carrión", "Calle Los Dibujitos", 17);
        System.out.println("Nombre: " + estudiante.getNombrePersona());
        System.out.println("Edad: " + estudiante.getEdadPersona());
        System.out.println("Universidad: " + estudiante.getUniversidad());
        System.out.println("Dirección: " + estudiante.getDireccion().getCalle() + " " + estudiante.getDireccion().getNumero());
    }
}

