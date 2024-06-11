public abstract class Producto {
    protected String nombre;
    protected float precio;
    protected int cantidad;

    public Producto(String n, float p, int c) {
        nombre = n;
        precio = p;
        cantidad = c;
    }

    public abstract float valor();

    public void aplicarDescuento(float porcentaje_descuento) {
        precio -= precio * (porcentaje_descuento / 100);
    }
}

class ProductoElectronico extends Producto {
    private int garantia;

    public ProductoElectronico(String n, float p, int c, int g) {
        super(n, p, c);
        garantia = g;
    }

    public float valor() {
        return precio * cantidad * (1 + garantia * 0.05f);
    }
}

class ProductoRopa extends Producto {
    private String talla;

    public ProductoRopa(String n, float p, int c, String t) {
        super(n, p, c);
        talla = t;
    }
}

class ProductoAlimento extends Producto {
    private String fecha_vencimiento;

    public ProductoAlimento(String n, float p, int c, String fv) {
        super(n, p, c);
        fecha_vencimiento = fv;
    }
}

public class Main {
    public static void main(String[] args) {
        final int maximo = 3;
        Producto[] inventario = new Producto[maximo];

        ProductoElectronico electronico = new ProductoElectronico("Arduino", 60, 2, 1);
        ProductoRopa ropita = new ProductoRopa("Camiseta", 250, 17, "S");
        ProductoAlimento comida = new ProductoAlimento("Leche", 4, 50, "2030-02-17");

        inventario[0] = electronico;
        inventario[1] = ropita;
        inventario[2] = comida;

        float valorTOTAL = 0;
        for (int i = 0; i < maximo; ++i) {
            valorTOTAL += inventario[i].valor();
        }

        System.out.println("Valor total del inventario: " + valorTOTAL);

        for (int i = 0; i < maximo; ++i) {
            inventario[i].aplicarDescuento(10);
        }

        float valorTOTALDSCTO = 0;
        for (int i = 0; i < maximo; ++i) {
            valorTOTALDSCTO += inventario[i].valor();
        }

        System.out.println("Valor total del inventario con descuento: " + valorTOTALDSCTO);
    }
}
