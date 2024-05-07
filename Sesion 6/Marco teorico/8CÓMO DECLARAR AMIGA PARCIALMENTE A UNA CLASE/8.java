class ClaseA {
    private int datoPrivadoA;

    public ClaseA(int dato) {
        this.datoPrivadoA = dato;
    }

    public int getDatoPrivadoA() {
        return datoPrivadoA;
    }
}

class ClaseB {
    public void metodoB(ClaseA objetoA) {
        System.out.println("El dato privado de ClaseA es: " + objetoA.getDatoPrivadoA());
    }
}

public class Main {
    public static void main(String[] args) {
        ClaseA objetoA = new ClaseA(42);
        ClaseB objetoB = new ClaseB();
        objetoB.metodoB(objetoA);
    }
}
