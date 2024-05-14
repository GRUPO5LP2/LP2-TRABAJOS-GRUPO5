class Cliente {
    protected String nombre;
    protected String apellido;
    protected String correo;
    protected String direccion;
    protected String numeroTarjeta;

    public Cliente(String nombre, String apellido, String correo, String direccion, String numeroTarjeta) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.correo = correo;
        this.direccion = direccion;
        this.numeroTarjeta = numeroTarjeta;
    }

    public String obtenerInformacion() {
        StringBuilder info = new StringBuilder();
        info.append("Nombre: ").append(nombre).append("\n");
        info.append("Apellido: ").append(apellido).append("\n");
        info.append("Correo: ").append(correo).append("\n");
        info.append("Direccion: ").append(direccion).append("\n");
        info.append("Numero de tarjeta: ").append(numeroTarjeta).append("\n");
        return info.toString();
    }

    protected String encriptarInformacion() {
        StringBuilder encriptacion = new StringBuilder();
        for (char c : correo.toCharArray()) {
            encriptacion.append((int) c);
        }
        return encriptacion.toString();
    }
}

class ClienteSeguro extends Cliente {
    private String codigoSeguridad;

    public ClienteSeguro(String nombre, String apellido, String correo, String direccion, String numeroTarjeta, String codigoSeguridad) {
        super(nombre, apellido, correo, direccion, numeroTarjeta);
        this.codigoSeguridad = codigoSeguridad;
    }

    public boolean verificarAutenticidad(String correoIngresado, String numeroTarjetaIngresado) {
        return correoIngresado.equals(correo) && numeroTarjetaIngresado.equals(numeroTarjeta);
    }

    public String obtenerInformacionEncriptada() {
        return encriptarInformacion();
    }
}

public class Main {
    public static void main(String[] args) {
        ClienteSeguro clienteSeguro = new ClienteSeguro("goku", "sayayin 1000", "gokulegana@hotmail_gmail_twitter.com", "Bajo un Puente", "1234 5678 9012 3456", "ABC123");
        System.out.println("Informacion del cliente:");
        System.out.println(clienteSeguro.obtenerInformacion());
        System.out.println("Informacion encriptada: " + clienteSeguro.obtenerInformacionEncriptada());
        boolean autenticado = clienteSeguro.verificarAutenticidad("gokulegana@hotmail_gmail_twitter.com", "1234 5678 9012 3456");
        System.out.println("Cliente autenticado: " + (autenticado ? "Si" : "No"));
    }
}