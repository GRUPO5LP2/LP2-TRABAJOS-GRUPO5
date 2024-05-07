class MiClase {
    private int datoPrivado;

    public MiClase(int dato) {
        this.datoPrivado = dato;
    }

    public int getDatoPrivado() {
        return datoPrivado;
    }
}

class Main {
    static void funcionAmiga(MiClase obj) {
        System.out.println("El dato privado es: " + obj.getDatoPrivado());
    }

    public static void main(String[] args) {
        MiClase objeto = new MiClase(42);
        funcionAmiga(objeto);
    }
}
