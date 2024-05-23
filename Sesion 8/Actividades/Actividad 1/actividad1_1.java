// Declaración de la clase abstracta Figura
abstract class Figura {
    // Método abstracto para calcular el área
    abstract float calcularArea();
}

// Ejemplo de una subclase que hereda de Figura
class Circulo extends Figura {
    private float radio;

    // Constructor
    Circulo(float r) {
        radio = r;
    }

    // Método para calcular el área del círculo
    float calcularArea() {
        return (float) (Math.PI * radio * radio);
    }
}

public class Main {
    public static void main(String[] args) {
        // Ejemplo de uso
        Circulo circulo = new Circulo(5);
        System.out.println("Área del círculo: " + circulo.calcularArea());
    }
}
