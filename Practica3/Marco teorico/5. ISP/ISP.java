interface ICliente {
    void pagar(float monto);
    void verHistorial();
}

interface IAdministrador {
    void crearUsuario(String nombre, String tipo);
    void eliminarUsuario(String nombre);
}

interface IVendedor {
    void agregarProducto(String nombre, float precio);
    void eliminarProducto(String nombre);
    void verProductos();
}

class Cliente implements ICliente {
    public void pagar(float monto) {
        System.out.println("El cliente ha pagado " + monto + " pesos");
    }

    public void verHistorial() {
        System.out.println("El cliente está viendo su historial de compras");
    }
}

class Administrador implements IAdministrador {
    public void crearUsuario(String nombre, String tipo) {
        System.out.println("Se ha creado un nuevo usuario de tipo " + tipo + " llamado " + nombre);
    }

    public void eliminarUsuario(String nombre) {
        System.out.println("Se ha eliminado el usuario " + nombre);
    }
}

class Vendedor implements IVendedor {
    private ArrayList<Pair<String, Float>> productos;

    public Vendedor() {
        this.productos = new ArrayList<>();
    }

    public void agregarProducto(String nombre, float precio) {
        this.productos.add(new Pair<>(nombre, precio));
        System.out.println("Se ha agregado el producto " + nombre + " con un precio de " + precio + " pesos");
    }

    public void eliminarProducto(String nombre) {
        for (int i = 0; i < this.productos.size(); i++) {
            Pair<String, Float> producto = this.productos.get(i);
            if (producto.getKey().equals(nombre)) {
                this.productos.remove(i);
                System.out.println("Se ha eliminado el producto " + nombre);
                return;
            }
        }
        System.out.println("No se ha encontrado el producto " + nombre);
    }

    public void verProductos() {
        System.out.println("Los productos en venta son:");
        for (Pair<String, Float> producto : this.productos) {
            System.out.println("- " + producto.getKey() + ": " + producto.getValue() + " pesos");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Cliente c = new Cliente();
        c.pagar(500.0f);
        c.verHistorial();

        Administrador a = new Administrador();
        a.crearUsuario("Juan", "vendedor");
        a.eliminarUsuario("Pedro");

        Vendedor v = new Vendedor();
        v.agregarProducto("Televisor", 10000.0f);
        v.agregarProducto("Computadora", 15000.0f);
        v.verProductos();

        v.eliminarProducto("Televisor");
        v.verProductos();
    }
}