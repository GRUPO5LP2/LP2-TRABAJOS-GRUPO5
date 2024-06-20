import java.io.*;

class Persona {
    String nombre;
    int edad;

    Persona(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }
}

public class Main {
    public static void escribirPersonas() {
        Persona[] personas = {
            new Persona("Juan Perez", 30),
            new Persona("Maria Gomez", 45),
            new Persona("Carlos Ruiz", 35)
        };

        try (DataOutputStream archivoSalida = new DataOutputStream(new FileOutputStream("personas.dat"))) {
            for (Persona persona : personas) {
                archivoSalida.writeUTF(persona.nombre);
                archivoSalida.writeInt(persona.edad);
            }
            System.out.println("Datos escritos en el archivo correctamente.");
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para escritura.");
        }
    }

    public static void leerPersona(int indice) {
        try (DataInputStream archivoEntrada = new DataInputStream(new FileInputStream("personas.dat"))) {
            long desplazamiento = indice * (UTF_LENGTH + 4); // UTF_LENGTH es el tamaño estimado de la cadena UTF

            archivoEntrada.skipBytes((int) desplazamiento);

            String nombre = archivoEntrada.readUTF();
            int edad = archivoEntrada.readInt();

            System.out.printf("Nombre: %s, Edad: %d\n", nombre, edad);
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para lectura.");
        }
    }

    public static void main(String[] args) {
        escribirPersonas();

        System.out.println("\nLeer persona en posición 0:");
        leerPersona(0);

        System.out.println("\nLeer persona en posición 1:");
        leerPersona(1);

        System.out.println("\nLeer persona en posición 2:");
        leerPersona(2);
    }
}
