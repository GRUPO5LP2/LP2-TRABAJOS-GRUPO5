class Persona {
    private int edad;
    private String nombre;

    public Persona(int edad, String nombre) {
        this.edad = edad;
        this.nombre = nombre;
    }

    public String getNombre() {
        return this.nombre;
    }

    public int getEdad() {
        return this.edad;
    }
}

public class Main {
    public static void main(String[] args) {
        Persona p1 = new Persona(25, "Juan");
        System.out.printf("La edad de %s es %d%n", p1.getNombre(), p1.getEdad());
    }
}