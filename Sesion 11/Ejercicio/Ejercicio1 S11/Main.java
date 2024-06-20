import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        BufferedReader lector = null;
        try {
            // Solicitar al usuario el nombre del archivo
            System.out.print("Ingrese el nombre del archivo de texto: ");
            Scanner scanner = new Scanner(System.in);
            String nombreArchivo = scanner.nextLine();
            
            // Crear un objeto FileReader y BufferedReader para leer el archivo
            FileReader archivo = new FileReader(nombreArchivo);
            lector = new BufferedReader(archivo);
            
            // Leer y mostrar el contenido del archivo línea por línea
            String linea;
            while ((linea = lector.readLine()) != null) {
                System.out.println(linea);
            }
        } catch (IOException e) {
            System.err.println("Error: No se pudo abrir el archivo " + e.getMessage());
            System.exit(1); // Salir con un código de error
        } finally {
            try {
                if (lector != null)
                    lector.close(); // Cerrar el BufferedReader si no es null
            } catch (IOException e) {
                System.err.println("Error al cerrar el archivo " + e.getMessage());
            }
        }
    }
}
