import java.util.*;

class Cliente {
    protected String nombre;
    protected String apellido;
    protected String correo;
    protected String direccion;
    protected String numero_tarjeta;

    public Cliente(String nombre, String apellido, String correo, String direccion, String numero_tarjeta) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.correo = correo;
        this.direccion = direccion;
        this.numero_tarjeta = numero_tarjeta;
    }

    public String obtenerInformacion() {
        String info = "";
        info += "Nombre: " + nombre + "\n";
        info += "Apellido: " + apellido + "\n";
        info += "Correo: " + correo + "\n";
        info += "Direccion: " + direccion + "\n";
        info += "Numero de tarjeta: " + numero_tarjeta + "\n";
        return info;
    }
}

class ClienteSeguro extends Cliente {
    public ClienteSeguro(String nombre, String apellido, String correo, String direccion, String numero_tarjeta) {
        super(nombre, apellido, correo, direccion, numero_tarjeta);
    }

    public String encriptarInformacion() {
        String encriptacion = "";
        for (char c : correo.toCharArray()) { // Itera cada letra de correo
            encriptacion += Integer.toString((int) c); // Convierte cada letra en ASCII
        }
        return encriptacion;
    }

    public boolean verificarAutenticidad(String correo_ingresado, String numero_tarjeta_ingresado) {
        return correo_ingresado.equals(correo) && numero_tarjeta_ingresado.equals(numero_tarjeta);
    }
}

public class Main {
    public static void main(String[] args) {
        ClienteSeguro clienteSeguro1 = new ClienteSeguro("goku", "sayayin 1000", "gokulegana@hotmail_gmail_twitter.com", "Bajo un Puente", "1234 5678 9012 3456");

        System.out.println("Informacion del cliente:");
        System.out.println(clienteSeguro1.obtenerInformacion());

        System.out.println("Informacion encriptada: " + clienteSeguro1.encriptarInformacion());

        boolean autenticado = clienteSeguro1.verificarAutenticidad("gokulegana@hotmail_gmail_twitter.com", "1234 5678 9012 3456");
        System.out.println("Cliente autenticado: " + (autenticado ? "Si" : "No"));
    }
}
