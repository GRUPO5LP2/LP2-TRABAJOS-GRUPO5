// Importaciones de clases necesarias
import java.util.*;

// Definición de la clase base DefinirProyecto
class DefinirProyecto {
    // Atributos de la clase
    private String nombreProyecto;
    private String descripcionProyecto;
    private String fechaInicio;
    private String fechaFin;
    private String estado;

    // Constructor de la clase
    public DefinirProyecto(String nombreProyecto, String descripcionProyecto, String fechaInicio, String fechaFin, String estado) {
        this.nombreProyecto = nombreProyecto;
        this.descripcionProyecto = descripcionProyecto;
        this.fechaInicio = fechaInicio;
        this.fechaFin = fechaFin;
        this.estado = estado;
    }

    // Métodos para obtener y establecer los atributos
    public String getNombreProyecto() {
        return nombreProyecto;
    }

    public void setNombreProyecto(String nombreProyecto) {
        this.nombreProyecto = nombreProyecto;
    }

    public String getDescripcionProyecto() {
        return descripcionProyecto;
    }

    public void setDescripcionProyecto(String descripcionProyecto) {
        this.descripcionProyecto = descripcionProyecto;
    }

    public String getFechaInicio() {
        return fechaInicio;
    }

    public void setFechaInicio(String fechaInicio) {
        this.fechaInicio = fechaInicio;
    }

    public String getFechaFin() {
        return fechaFin;
    }

    public void setFechaFin(String fechaFin) {
        this.fechaFin = fechaFin;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }
}

// Clase GestionDeProyecto que hereda de DefinirProyecto
class GestionDeProyecto extends DefinirProyecto {
    // Constructor de la clase
    public GestionDeProyecto(String nombreProyecto, String descripcionProyecto, String fechaInicio, String fechaFin, String estado) {
        super(nombreProyecto, descripcionProyecto, fechaInicio, fechaFin, estado);
    }

    // Método específico para gestionar el proyecto
    public void gestionar() {
        System.out.println("Proyecto gestionado");
    }
}

// Clase AgregacionDeComentario para representar un comentario
class AgregacionDeComentario {
    // Atributos de la clase
    private String autor;
    private String fecha;
    private String contenido;

    // Constructor de la clase
    public AgregacionDeComentario(String autor, String fecha, String contenido) {
        this.autor = autor;
        this.fecha = fecha;
        this.contenido = contenido;
    }

    // Método para agregar un comentario
    public void agregar() {
        System.out.println("Comentario agregado");
    }

    // Métodos para obtener y establecer los atributos
    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getFecha() {
        return fecha;
    }

    public void setFecha(String fecha) {
        this.fecha = fecha;
    }

    public String getContenido() {
        return contenido;
    }

    public void setContenido(String contenido) {
        this.contenido = contenido;
    }
}
// Clase CompartirElArchivo que representa un archivo compartido
class CompartirElArchivo {
    private String nombreArchivo;
    private String tipo;
    private String fechaCreacion;
    private String fechaModificacion;
    private String autor;

    // Constructor de la clase
    public CompartirElArchivo(String nombreArchivo, String tipo, String fechaCreacion, String fechaModificacion, String autor) {
        this.nombreArchivo = nombreArchivo;
        this.tipo = tipo;
        this.fechaCreacion = fechaCreacion;
        this.fechaModificacion = fechaModificacion;
        this.autor = autor;
    }
    
    // Método para compartir el archivo
    public void compartir() {
        System.out.println("Archivo compartido");
    }

    // Métodos getters y setters para los atributos
    public String getNombreArchivo() {
        return nombreArchivo;
    }

    public void setNombreArchivo(String nombreArchivo) {
        this.nombreArchivo = nombreArchivo;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getFechaCreacion() {
        return fechaCreacion;
    }

    public void setFechaCreacion(String fechaCreacion) {
        this.fechaCreacion = fechaCreacion;
    }

    public String getFechaModificacion() {
        return fechaModificacion;
    }

    public void setFechaModificacion(String fechaModificacion) {
        this.fechaModificacion = fechaModificacion;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }
}

// Interfaz Proyecto que define métodos para operaciones de proyecto
interface Proyecto {
    void CrearProyecto(DefinirProyecto proyecto);
    void GestionarProyecto(GestionDeProyecto proyecto);
}

// Interfaz Comentario que define método para agregar comentarios
interface Comentario {
    void AgregarComentario(AgregacionDeComentario comentario);
}

// Interfaz Archivo que define método para compartir archivos
interface Archivo {
    void CompartirArchivo(CompartirElArchivo archivo);
}

// Clase CrearProyectos que implementa la interfaz Proyecto
class CrearProyectos implements Proyecto {
    // Método para crear un proyecto
    public void CrearProyecto(DefinirProyecto proyecto) {
        System.out.println("Proyecto creado");
    }

    // Método para gestionar un proyecto
    public void GestionarProyecto(GestionDeProyecto proyecto) {
        System.out.println("Proyecto gestionado");
    }
}

// Clase AgregarComentarios que implementa la interfaz Comentario
class AgregarComentarios implements Comentario {
    // Método para agregar un comentario
    public void AgregarComentario(AgregacionDeComentario comentario) {
        System.out.println("Comentario agregado");
    }
}

// Clase CompartirArchivos que implementa la interfaz Archivo
class CompartirArchivos implements Archivo {
    // Método para compartir un archivo
    @Override
    public void CompartirArchivo(CompartirElArchivo archivo) {
        System.out.println("Archivo compartido");
    }
}

// Clase principal que contiene el método main
public class Main {
    // Método main
    public static void main(String[] args) {
        // Creación de objetos
        DefinirProyecto proyecto1 = new DefinirProyecto("Proyecto 1", "Proyecto de prueba", "01/01/2021", "01/02/2021", "En proceso");
        AgregacionDeComentario comentario1 = new AgregacionDeComentario("Autor 1", "01/01/2021", "Contenido 1");
        CompartirElArchivo archivo1 = new CompartirElArchivo("Archivo 1", "Documento", "01/01/2021", "01/01/2021", "Autor 1");

        // Ejemplo de uso de CompartirArchivos
        CompartirArchivos compartidor = new CompartirArchivos();
        compartidor.CompartirArchivo(archivo1); // Compartir el archivo1
    }
}
