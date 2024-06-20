import java.io.*;
import java.util.HashMap;
import java.util.Map;

class Producto {
    private String nombre;
    private double precio;
    private int cantidad;

    public Producto() {
        this.nombre = "";
        this.precio = 0.0;
        this.cantidad = 0;
    }

    public Producto(String nombre, double precio, int cantidad) throws IllegalArgumentException {
        if (precio < 0 || cantidad < 0) {
            throw new IllegalArgumentException("Precio y cantidad deben ser valores no negativos.");
        }
        this.nombre = nombre;
        this.precio = precio;
        this.cantidad = cantidad;
    }

    // Getters
    public String getNombre() {
        return nombre;
    }

    public double getPrecio() {
        return precio;
    }

    public int getCantidad() {
        return cantidad;
    }

    // Setters
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setPrecio(double precio) throws IllegalArgumentException {
        if (precio < 0) {
            throw new IllegalArgumentException("El precio no puede ser negativo.");
        }
        this.precio = precio;
    }

    public void setCantidad(int cantidad) throws IllegalArgumentException {
        if (cantidad < 0) {
            throw new IllegalArgumentException("La cantidad no puede ser negativa.");
        }
        this.cantidad = cantidad;
    }

    // Método para mostrar información del producto
    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre + ", Precio: " + precio + ", Cantidad: " + cantidad);
    }

    // Método para leer un producto desde una línea CSV
    public void leerDesdeCSV(String linea) {
        String[] datos = linea.split(",");
        this.nombre = datos[0];
        this.precio = Double.parseDouble(datos[1]);
        this.cantidad = Integer.parseInt(datos[2]);
    }

    // Método para escribir un producto en formato CSV
    public String escribirEnCSV() {
        return nombre + "," + precio + "," + cantidad + "\n";
    }
}

public class Inventario {
    public static void cargarIndice(Map<String, Long> indice, String nombreArchivo) throws IOException {
        try (BufferedReader archivo = new BufferedReader(new FileReader(nombreArchivo))) {
            String linea;
            long pos = 0;
            while ((linea = archivo.readLine()) != null) {
                Producto producto = new Producto();
                producto.leerDesdeCSV(linea);
                indice.put(producto.getNombre(), pos);
                pos = archivo.getFilePointer();
            }
        } catch (FileNotFoundException e) {
            throw new IOException("No se pudo abrir el archivo.");
        }
    }

    public static void agregarProducto(String nombreArchivo, Producto producto, Map<String, Long> indice) throws IOException {
        try (RandomAccessFile archivo = new RandomAccessFile(nombreArchivo, "rw")) {
            archivo.seek(archivo.length());
            long pos = archivo.getFilePointer();
            archivo.writeBytes(producto.escribirEnCSV());
            indice.put(producto.getNombre(), pos);
        }
    }

    public static Producto buscarProducto(String nombreArchivo, Map<String, Long> indice, String nombre) throws IOException {
        if (indice.containsKey(nombre)) {
            try (RandomAccessFile archivo = new RandomAccessFile(nombreArchivo, "r")) {
                archivo.seek(indice.get(nombre));
                String linea = archivo.readLine();
                Producto producto = new Producto();
                producto.leerDesdeCSV(linea);
                return producto;
            }
        } else {
            throw new IOException("Producto no encontrado.");
        }
    }

    public static void actualizarProducto(String nombreArchivo, Map<String, Long> indice, String nombre, double nuevoPrecio, int nuevaCantidad) throws IOException {
        if (indice.containsKey(nombre)) {
            try (RandomAccessFile archivo = new RandomAccessFile(nombreArchivo, "rw")) {
                archivo.seek(indice.get(nombre));
                archivo.writeBytes(nombre + "," + nuevoPrecio + "," + nuevaCantidad + "\n");
                indice.put(nombre, archivo.getFilePointer());
            }
        } else {
            throw new IOException("Producto no encontrado.");
        }
    }

    public static void generarInforme(String nombreArchivo) throws IOException {
        try (BufferedReader archivo = new BufferedReader(new FileReader(nombreArchivo))) {
            String linea;
            System.out.println("Informe del inventario:");
            while ((linea = archivo.readLine()) != null) {
                Producto producto = new Producto();
                producto.leerDesdeCSV(linea);
                producto.mostrarInfo();
            }
        } catch (FileNotFoundException e) {
            throw new IOException("No se pudo abrir el archivo.");
        }
    }

    public static void main(String[] args) {
        Map<String, Long> indice = new HashMap<>();
        String nombreArchivo = "inventario.csv";

        try {
            // Crear archivo de inventario y cargar índice
            cargarIndice(indice, nombreArchivo);

            // Agregar productos al inventario
            try {
                agregarProducto(nombreArchivo, new Producto("Producto1", 10.0, 100), indice);
                agregarProducto(nombreArchivo, new Producto("Producto2", 20.0, 50), indice);
            } catch (IllegalArgumentException e) {
                System.err.println("Error al agregar producto: " + e.getMessage());
            }

            // Buscar y mostrar un producto
            try {
                Producto productoEncontrado = buscarProducto(nombreArchivo, indice, "Producto1");
                productoEncontrado.mostrarInfo();
            } catch (IOException e) {
                System.err.println("Error al buscar producto: " + e.getMessage());
            }

            // Actualizar información de un producto
            try {
                actualizarProducto(nombreArchivo, indice, "Producto1", 12.0, 90);
            } catch (IOException e) {
                System.err.println("Error al actualizar producto: " + e.getMessage());
            }

            // Generar informe
            generarInforme(nombreArchivo);
        } catch (IOException e) {
            System.err.println("Error del sistema: " + e.getMessage());
        }
    }
}
