class Estudiantes {
    private String nombre;
    private int edad;
    private int grado;

    public Estudiantes(String nameEstudiante, int edadEstudiante, int gradoEstudiante) {
        this.nombre = nameEstudiante;
        this.edad = edadEstudiante;
        this.grado = gradoEstudiante;
    }

    public void tomarExamen() {
        System.out.println("Tomando Evaluación...");
    }

    public void calificarExamen() {
        System.out.println("Examen Calificado :)");
    }
}

Estudiantes escolar1 = new Estudiantes("Mauricio", 15, 4);
Estudiantes escolar2 = new Estudiantes("Oscar", 20, 2);
escolar1.tomarExamen();
escolar2.calificarExamen();

