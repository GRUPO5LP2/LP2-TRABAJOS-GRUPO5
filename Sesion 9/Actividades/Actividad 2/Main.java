class Calculadora {
    double a, b;

    Calculadora(double num1, double num2) {
        this.a = num1;
        this.b = num2;
    }

    Calculadora() {
        this.a = 0;
        this.b = 0;
    }

    int sumar(int a, int b) {
        return a + b;
    }

    double sumar(double a, double b) {
        return a + b;
    }

    float sumar(float a, float b) {
        return a + b;
    }

    int sumar(int a, int b, int c) {
        return a + b + c;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculadora calcular1 = new Calculadora();

        double resultado = calcular1.sumar(13.575, 24.65);

        System.out.println("El resultado de la suma es: " + resultado);
    }
}
