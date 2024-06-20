import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try (BufferedWriter archivoSalida = new BufferedWriter(new FileWriter("ejemplo.txt"))) {
            archivoSalida.write("Hola, este es un ejemplo de escritura en un archivo.\n");
            archivoSalida.write("Esta es la segunda línea.\n");
            System.out.println("Datos escritos en el archivo correctamente.");
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para escritura.");
        }

        try (BufferedReader archivoEntrada = new BufferedReader(new FileReader("ejemplo.txt"))) {
            String linea;
            while ((linea = archivoEntrada.readLine()) != null) {
                System.out.println(linea);
            }
        } catch (IOException e) {
            System.err.println("No se pudo abrir el archivo para lectura.");
        }
    }
}
