import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        String nombre, apellido;
        int edad;

        try (BufferedReader archivoEntrada = new BufferedReader(new FileReader("datos.txt"))) {
            String linea;
            while ((linea = archivoEntrada.readLine()) != null) {
                String[] partes = linea.split("\\s+");
                nombre = partes[0];
                apellido = partes[1];
                edad = Integer.parseInt(partes[2]);
                System.out.printf("Nombre: %s %s, Edad: %d\n", nombre, apellido, edad);
            }
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para lectura.");
        }
    }
}
