class Vehiculo {
    public void acelerar() {
        System.out.println("Acelerando vehiculo");
    }
}

class Coche extends Vehiculo {
    @Override
    public void acelerar() {
        System.out.println("Acelerando coche");
    }

    public void encenderLuces() {
        System.out.println("Luces del coche encendidas");
    }
}

class Motocicleta extends Vehiculo {
    @Override
    public void acelerar() {
        System.out.println("Acelerando motocicleta");
    }
}

public class actividad4 {
    public static void main(String[] args) {
        Coche coche1 = new Coche();                  // INSTANCIAMOS COCHE1 DE LA CLASE COCHE
        Motocicleta motocicleta1 = new Motocicleta(); // INSTANCIAMOS MOTOCICLETA1 DE LA CLASE MOTOCICLETA
        coche1.acelerar();                            // LLAMAMOS AL METODO ACELERAR DE LA CLASE COCHE CON EL OBJETO INSTANCIADO COCHE1
        motocicleta1.acelerar();                      // LLAMAMOS AL METODO ACELERAR DE LA CLASE MOTOCICLETA CON EL OBJETO INSTANCIADO MOTOCICLETA1

        coche1.encenderLuces();                       // LLAMAMOS AL METODO ENCENDERLUCES DE LA CLASE COCHE
        // motocicleta1.encenderLuces();              // LLAMAMOS AL METODO ENCENDERLUCES DE LA CLASE MOTOCICLETA Y AL NO EXISTIR SUELTA UN ERROR
    }
}
