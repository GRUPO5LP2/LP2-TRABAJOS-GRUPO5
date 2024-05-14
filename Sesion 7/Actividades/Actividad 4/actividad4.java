class ClaseBase1 {
    public int atributoPublico;
    
    public void metodoPublico() {
        System.out.println("Soy un metodo publico");
    }
}

class ClaseDerivada1 extends ClaseBase1 {
    // La claseDerivada1 hereda los atributos y métodos públicos de la claseBase1
}

class ClaseBase2 {
    protected int atributoProtegido;
}

class ClaseDerivada2 extends ClaseBase2 {
    // La claseDerivada2 hereda los atributos protegidos de la claseBase2
}

class ClaseBase3 {
    private int atributoPrivado;
    
    private void metodoPrivado() {
        System.out.println("Soy un metodo privado");
    }
}

class ClaseDerivada3 extends ClaseBase3 {
    // La claseDerivada3 hereda los atributos y métodos privados de la claseBase3
}

public class actividad4 {
    public static void main(String[] args) {
        // Herencia pública
        ClaseDerivada1 obj1 = new ClaseDerivada1();
        obj1.atributoPublico = 10;        // Acceso a atributo público
        obj1.metodoPublico();             // Llamada a método público

        // Herencia protegida
        ClaseDerivada2 obj2 = new ClaseDerivada2();
        // obj2.atributoProtegido = 10;   // Error: el atributo protegido no es accesible desde fuera de la jerarquía de herencia
        
        // Herencia privada
        ClaseDerivada3 obj3 = new ClaseDerivada3();
        // obj3.atributoPrivado = 10;     // Error: el atributo privado no es accesible desde fuera de la clase derivada
        // obj3.metodoPrivado();          // Error: el método privado no es accesible desde fuera de la clase derivada
    }
}
