class Vector2D {
    private double x;
    private double y;

    Vector2D(double x, double y) {
        this.x = x;
        this.y = y;
    }

    Vector2D sumar(Vector2D otro) {
        return new Vector2D(this.x + otro.x, this.y + otro.y);
    }

    void mostrar() {
        System.out.println("(" + x + ", " + y + ")");
    }
}

public class Main {
    public static void main(String[] args) {
        Vector2D v1 = new Vector2D(1.0, 2.0);
        Vector2D v2 = new Vector2D(3.0, 4.0);

        Vector2D suma = v1.sumar(v2);

        System.out.print("La suma de los vectores es: ");
        suma.mostrar();
    }
}
