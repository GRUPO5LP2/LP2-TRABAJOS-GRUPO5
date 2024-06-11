class Calculadora {
    public int sumar(int a, int b) {
        System.out.println("Sumando enteros...");
        return a + b;
    }
    
    public double sumar(double a, double b) {
        System.out.println("Sumando doubles...");
        return a + b;
    }
    
    public String sumar(String a, String b) {
        System.out.println("Concatenando strings...");
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculadora calc = new Calculadora();
        System.out.println(calc.sumar(5, 3));             // Llama a sumar(int, int)
        System.out.println(calc.sumar(2.5, 3.7));         // Llama a sumar(double, double)
        System.out.println(calc.sumar("Hola", " mundo")); // Llama a sumar(String, String)
    }
}
