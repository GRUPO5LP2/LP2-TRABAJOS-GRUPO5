import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try (BufferedWriter archivoSalida = new BufferedWriter(new FileWriter("personas.txt"))) {
            archivoSalida.write("Juan Perez 30\n");
            archivoSalida.write("Maria Gomez 45\n");
            archivoSalida.write("Carlos Ruiz 35\n");
            System.out.println("Datos escritos en el archivo correctamente.");
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para escritura.");
        }

        try (BufferedReader archivoEntrada = new BufferedReader(new FileReader("personas.txt"))) {
            String linea;
            while ((linea = archivoEntrada.readLine()) != null) {
                String[] partes = linea.split("\\s+");
                String nombre = partes[0];
                String apellido = partes[1];
                int edad = Integer.parseInt(partes[2]);
                System.out.printf("Nombre: %s %s, Edad: %d\n", nombre, apellido, edad);
            }
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para lectura.");
        }
    }
}
