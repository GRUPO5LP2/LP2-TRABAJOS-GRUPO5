class Numero {
    private int valor;

    Numero(int valor) {
        this.valor = valor;
    }

    Numero negativo() {
        return new Numero(-this.valor);
    }

    int obtenerValor() {
        return this.valor;
    }
}

public class Main {
    public static void main(String[] args) {
        Numero num = new Numero(10);

        Numero negativo = num.negativo();

        System.out.println("Número original: " + num.obtenerValor());
        System.out.println("Número negativo: " + negativo.obtenerValor());
    }
}
