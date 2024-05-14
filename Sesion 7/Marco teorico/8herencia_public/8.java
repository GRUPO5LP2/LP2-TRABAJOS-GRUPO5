import java.util.*;

class Vehiculo {
    public void conducir() {
        System.out.println("¡El vehículo está en movimiento!");
    }
}

class Automovil extends Vehiculo {
    public void encenderLuces() {
        System.out.println("Luces encendidas");
    }
}

public class Main {
    public static void main(String[] args) {
        Automovil miAuto = new Automovil();
        miAuto.conducir(); 
        miAuto.encenderLuces(); 
    }
}
