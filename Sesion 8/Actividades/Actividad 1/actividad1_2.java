// Declaración de la clase abstracta Figura
abstract class Figura {
    // Método abstracto para calcular el área
    abstract float calcularArea();
}

// Clase derivada Círculo
class Circulo extends Figura {
    private float radio;

    Circulo(float r) {
        radio = r;
    }

    float calcularArea() {
        return (float) (Math.PI * radio * radio);
    }
}

// Clase derivada Rectángulo
class Rectangulo extends Figura {
    private float base, altura;

    Rectangulo(float b, float h) {
        base = b;
        altura = h;
    }

    float calcularArea() {
        return base * altura;
    }
}

// Clase derivada Triángulo
class Triangulo extends Figura {
    private float base, altura;

    Triangulo(float b, float h) {
        base = b;
        altura = h;
    }

    float calcularArea() {
        return (base * altura) / 2;
    }
}

public class Main {
    public static void main(String[] args) {
        Circulo circulo = new Circulo(5);
        Rectangulo rectangulo = new Rectangulo(4, 6);
        Triangulo triangulo = new Triangulo(3, 8);

        System.out.println("Área del círculo: " + circulo.calcularArea());
        System.out.println("Área del rectángulo: " + rectangulo.calcularArea());
        System.out.println("Área del triángulo: " + triangulo.calcularArea());
    }
}
