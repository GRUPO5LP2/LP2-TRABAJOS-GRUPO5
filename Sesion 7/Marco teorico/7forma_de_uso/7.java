class MiClase {
    private int datoPrivado;

    public MiClase(int dato) {
        this.datoPrivado = dato;
    }

    public int getDatoPrivado() {
        return datoPrivado;
    }
}

class ClaseAmiga {
    public void mostrarDatoPrivado(MiClase obj) {
        System.out.println("El dato privado de MiClase es: " + obj.getDatoPrivado());
    }
}

public class Main {
    public static void main(String[] args) {
        MiClase objeto = new MiClase(42);
        ClaseAmiga amigo = new ClaseAmiga();
        amigo.mostrarDatoPrivado(objeto);
    }
}
