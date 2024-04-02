import java.util.ArrayList;
import java.util.Scanner;

class Tienda {
    String nombre;
    String direccion;
    String tipo;
    ArrayList<String> productos_disponibles = new ArrayList<>();
    ArrayList<Float> precios = new ArrayList<>();
    ArrayList<String> compras = new ArrayList<>();

    public Tienda(String nombre, String direccion, String tipo) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.tipo = tipo;
    }

    public void generarListaProductos() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese el nombre del producto: ");
        String producto = scanner.next();
        System.out.print("Ingrese el precio del producto: ");
        float precio = scanner.nextFloat();
        productos_disponibles.add(producto);
        precios.add(precio);
    }

    public void verListaProductosDisponibles() {
        for (int i = 0; i < productos_disponibles.size(); i++) {
            System.out.println(productos_disponibles.get(i) + " - " + precios.get(i));
        }
    }

    public void verListaDeCompras() {
        for (String compra : compras) {
            System.out.println(compra);
        }
    }
}

class Cliente {
    String nombres;
    String apellidos;
    String direccion;
    ArrayList<String> lista_compras = new ArrayList<>();

    public Cliente(String nombres, String apellidos, String direccion) {
        this.nombres = nombres;
        this.apellidos = apellidos;
        this.direccion = direccion;
    }

    public void agregarProductosLista() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("¿Qué producto desea agregar? ");
        String producto = scanner.next();
        lista_compras.add(producto);
    }

    public void pagarCuenta(Tienda tienda) {
        float total = 0;
        float pago = 0;
        for (String compra : lista_compras) {
            for (int i = 0; i < tienda.productos_disponibles.size(); i++) {
                if (compra.equals(tienda.productos_disponibles.get(i))) {
                    total += tienda.precios.get(i);
                }
            }
        }
        Scanner scanner = new Scanner(System.in);
        System.out.println("El precio total es: " + total);
        System.out.print("¿Con cuanto pagará su cuenta? ");
        pago = scanner.nextFloat();
        if (pago >= total) {
            System.out.println("Su vuelto es: " + (pago - total));
            tienda.compras.addAll(lista_compras);
        } else {
            System.out.println("No tiene suficiente dinero");
        }
    }
}

public class Main {
    static Scanner scanner = new Scanner(System.in);
    static ArrayList<Tienda> tiendas = new ArrayList<>();
    static ArrayList<Cliente> clientes = new ArrayList<>();

    public static void main(String[] args) {
        while (true) {
            String nombre = ingresarDatos("Nombre de la tienda: ");
            String direccion = ingresarDatos("Direccion de la tienda: ");
            String tipo = ingresarDatos("Tipo de tienda: ");
            Tienda tienda = new Tienda(nombre, direccion, tipo);
            tiendas.add(tienda);
            System.out.println();
            nombre = ingresarDatos("Nombres del cliente: ");
            String apellidos = ingresarDatos("Apellidos del cliente: ");
            String direccionCliente = ingresarDatos("Direccion del cliente: ");
            Cliente cliente = new Cliente(nombre, apellidos, direccionCliente);
            clientes.add(cliente);
            System.out.println();
            while (true) {
                nombre = ingresarDatos("Ingrese el nombre de la tienda: ");
                for (Tienda tienda1 : tiendas) {
                    if (tienda1.nombre.equals(nombre)) {
                        nombre = ingresarDatos("Ingrese el nombre del cliente: ");
                        System.out.println();
                        for (Cliente cliente1 : clientes) {
                            if (cliente1.nombres.equals(nombre)) {
                                while (true) {
                                    int opcion = menu();
                                    if (opcion == 1) {
                                        tienda1.generarListaProductos();
                                    } else if (opcion == 2) {
                                        tienda1.verListaProductosDisponibles();
                                    } else if (opcion == 3) {
                                        cliente1.agregarProductosLista();
                                    } else if (opcion == 4) {
                                        tienda1.verListaDeCompras();
                                    } else if (opcion == 5) {
                                        cliente1.pagarCuenta(tienda1);
                                    } else if (opcion == 6) {
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    static String ingresarDatos(String mensaje) {
        System.out.print(mensaje);
        return scanner.next();
    }

    static int menu() {
        System.out.println("Menu");
        System.out.println("1. Agregar productos a la tienda");
        System.out.println("2. Ver lista de productos disponibles");
        System.out.println("3. Agregar productos a la lista de compras");
        System.out.println("4. Ver lista de compras");
        System.out.println("5. Calcular total y pagar");
        System.out.println("6. Salir");
        System.out.print("Elija una opción: ");
        return scanner.nextInt();
    }
}
