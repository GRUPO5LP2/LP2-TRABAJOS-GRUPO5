class Movil {
    String marca;
    String modelo;
    String sistemaOperativo;

    Movil(String marca, String modelo, String sistemaOperativo) {
        this.marca = marca;
        this.modelo = modelo;
        this.sistemaOperativo = sistemaOperativo;
    }

    @Override
    protected void finalize() {
        System.out.println("Movil destruido");
    }
}

class Telefono extends Movil {
    float precio;

    Telefono(String marca, String modelo, String sistemaOperativo, float precio) {
        super(marca, modelo, sistemaOperativo);
        this.precio = precio;
    }

    @Override
    protected void finalize() {
        System.out.println("Telefono destruido");
    }
}

class Tablet extends Movil {
    String dueno;

    Tablet(String marca, String modelo, String sistemaOperativo, String dueno) {
        super(marca, modelo, sistemaOperativo);
        this.dueno = dueno;
    }

    @Override
    protected void finalize() {
        System.out.println("Tablet destruida");
    }
}

public class Main {
    public static void main(String[] args) {
        Tablet tablet1 = new Tablet("Lenovo", "Tab P11 pro", "Android", "Mauricio");  // Instanciando objeto Tablet
        Telefono telefono1 = new Telefono("Xiaomi", "Redmi Note 13 Pro Plus 5g", "Android", 1599.99f);  // Instanciando objeto Telefono
        // System.gc();  // Con esta línea se invoca el recolector de basura para destruir los objetos
    }
}
