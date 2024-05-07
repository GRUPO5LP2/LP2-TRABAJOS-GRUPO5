class Punto {
    private double x;
    private double y;

    Punto(double x, double y) {
        this.x = x;
        this.y = y;
    }

    Punto sumar(Punto otro) {
        return new Punto(this.x + otro.x, this.y + otro.y);
    }

    void mostrar() {
        System.out.println("(" + x + ", " + y + ")");
    }
}

public class Main {
    public static void main(String[] args) {
        Punto punto1 = new Punto(1.0, 2.0);
        Punto punto2 = new Punto(3.0, 4.0);

        Punto suma = punto1.sumar(punto2);

        System.out.print("La suma de los puntos es: ");
        suma.mostrar();
    }
}
