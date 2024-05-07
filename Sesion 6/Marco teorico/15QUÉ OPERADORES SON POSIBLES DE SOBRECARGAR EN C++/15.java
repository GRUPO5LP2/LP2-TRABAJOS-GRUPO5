class Numero {
    private int valor;

    Numero(int valor) {
        this.valor = valor;
    }

    Numero sumar(Numero otro) {
        return new Numero(this.valor + otro.valor);
    }

    void mostrar() {
        System.out.println("Valor: " + valor);
    }
}

public class Main {
    public static void main(String[] args) {
        Numero num1 = new Numero(5);
        Numero num2 = new Numero(10);

        Numero suma = num1.sumar(num2);
        suma.mostrar();
    }
}
