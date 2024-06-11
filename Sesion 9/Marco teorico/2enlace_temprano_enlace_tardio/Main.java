class Animal {
    public void hacerSonido() { // Enlace temprano por defecto
    System.out.println("Sonido genérico de animal");
    }
   }
   class Perro extends Animal {
    @Override
    public void hacerSonido() { // Redefinición (enlace tardío con @Override)
    System.out.println("Guau!");
    }
   }
   public class Main {
    public static void main(String[] args) {
    Animal animal1 = new Perro();
    animal1.hacerSonido(); // Guau! (enlace tardío debido a @Override)
    }
   }
   