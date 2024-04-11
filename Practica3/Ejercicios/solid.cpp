#include <iostream>
#include <string>
using namespace std;

class DefinirProyecto{

    public:
    string nombreProyecto;
    string descripcionProyecto;
    string fechaInicio;
    string fechaFin;
    string estado;

    DefinirProyecto(string nombreProyecto, string descripcionProyecto, string fechaInicio, string fechaFin, string estado){
        this->nombreProyecto = nombreProyecto;
        this->descripcionProyecto = descripcionProyecto;
        this->fechaInicio = fechaInicio;
        this->fechaFin = fechaFin;
        this->estado = estado;
    }

    string getNombreProyecto(){
        return nombreProyecto;
    }

    void setNombreProyecto(string nombreProyecto){
        this->nombreProyecto = nombreProyecto;
    }

    string getDescripcionProyecto(){
        return descripcionProyecto;
    }

    void setDescripcionProyecto(string descripcionProyecto){
        this->descripcionProyecto = descripcionProyecto;
    }

    string getFechaInicio(){
        return fechaInicio;
    }
    
    void setFechaInicio(string fechaInicio){
        this->fechaInicio = fechaInicio;
    }

    string getFechaFin(){
        return fechaFin;
    }

    void setFechaFin(string fechaFin){
        this->fechaFin = fechaFin;
    }

    string getEstado(){
        return estado;
    }

    void setEstado(string estado){
        this->estado = estado;
    }
};
class GestionDeProyecto : public DefinirProyecto{

    public:
        GestionDeProyecto(string nombreProyecto, string descripcionProyecto, string fechaInicio, string fechaFin, string estado) : DefinirProyecto(nombreProyecto, descripcionProyecto, fechaInicio, fechaFin, estado){

        }

        void gestionar(){
            cout << "Proyecto gestionado" << endl;
        }
};

class AgregacionDeComentario{

    public:
        string autor;
        string fecha;
        string contenido;

        AgregacionDeComentario(string autor, string fecha, string contenido){
            this->autor = autor;
            this->fecha = fecha;
            this->contenido = contenido;
        }

        void agregar(){
            cout << "Comentario agregado" << endl;
        }

        string getAutor(){
            return autor;
        }

        void setAutor(string autor){
            this->autor = autor;
        }

        string getFecha(){
            return fecha;
        }

        void setFecha(string fecha){
            this->fecha = fecha;
        }

        string getContenido(){
            return contenido;
        }

        void setContenido(string contenido){
            this->contenido = contenido;
        }

};
class CompartirElArchivo{

    public:
        string nombreArchivo;
        string tipo;
        string fechaCreacion;
        string fechaModificacion;
        string autor;

        CompartirElArchivo(string nombreArchivo, string tipo, string fechaCreacion, string fechaModificacion, string autor){
            this->nombreArchivo = nombreArchivo;
            this->tipo = tipo;
            this->fechaCreacion = fechaCreacion;
            this->fechaModificacion = fechaModificacion;
            this->autor = autor;
        }
        
        void compartir(){
            cout << "Archivo compartido" << endl;
        }

        string getNombreArchivo(){
            return nombreArchivo;
        }

        void setNombreArchivo(string nombreArchivo){
            this->nombreArchivo = nombreArchivo;
        }

        string getTipo(){
            return tipo;
        }

        void setTipo(string tipo){
            this->tipo = tipo;
        }

        string getFechaCreacion(){
            return fechaCreacion;
        }

        void setFechaCreacion(string fechaCreacion){
            this->fechaCreacion = fechaCreacion;
        }

        string getFechaModificacion(){
            return fechaModificacion;
        }

        void setFechaModificacion(string fechaModificacion){
            this->fechaModificacion = fechaModificacion;
        }

        string getAutor(){
            return autor;
        }

        void setAutor(string autor){
            this->autor = autor;
        }
};

class Proyecto{
    public:
        virtual void CrearProyecto(const DefinirProyecto& proyecto) = 0;
        virtual void GestionarProyecto(const GestionDeProyecto& proyecto) = 0;
        virtual ~Proyecto() = default;
};
class Comentario{
    public:
        virtual void AgregarComentario(const AgregacionDeComentario& comentario) = 0;
        virtual ~Comentario() = default;
};
class Archivo{
    public:
        virtual void CompartirArchivo(const CompartirElArchivo& archivo) = 0;
        virtual ~Archivo() = default;
};

class CrearProyectos : public Proyecto{
    public:
        void CrearProyecto(const DefinirProyecto& proyecto) override{
            cout << "Proyecto creado" << endl;
        }
};

class GestionarProyectos : public Proyecto{
    
    public:
        void GestionarProyecto(const GestionDeProyecto& proyecto) override{
            cout << "Proyecto gestionado" << endl;
        }
};

class AgregarComentarios : public Comentario{

    public:
        void AgregarComentario(const AgregacionDeComentario& comentario) override{
            cout << "Comentario agregado" << endl;
        }
};

class CompartirArchivos : public Archivo {

    public:
        void CompartirArchivo(const CompartirElArchivo& archivo) override {
            cout << "Archivo compartido" << endl;
        }
};


int main() {
    
    DefinirProyecto* proyecto1 = new DefinirProyecto("Proyecto 1", "Proyecto de prueba", "01/01/2021", "01/02/2021", "En proceso");
    AgregacionDeComentario* comentario1 = new AgregacionDeComentario("Autor 1", "01/01/2021", "Contenido 1");
    CompartirElArchivo* archivo1 = new CompartirElArchivo("Archivo 1", "Documento", "01/01/2021", "01/01/2021", "Autor 1");
    
    return 0;
}