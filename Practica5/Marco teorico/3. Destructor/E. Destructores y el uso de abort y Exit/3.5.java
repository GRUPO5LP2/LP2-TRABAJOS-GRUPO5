public class MiClase {
    public MiClase() {
        System.out.println("Constructor llamado");
    }

    @Override
    protected void finalize() throws Throwable {
        try {
            // Simulando una condición de error
            boolean error = true;

            if (error) {
                System.out.println("Error detectado en el destructor");
                // Terminar abruptamente el programa
                Runtime.getRuntime().halt(1);
            } else {
                System.out.println("Destructor llamado normalmente");
            }
        } finally {
            super.finalize();
        }
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Inicio del programa");

        MiClase objeto = new MiClase();

        // Forzar una condición de error
        boolean error = true;

        if (error) {
            System.out.println("Error detectado en main()");
            // Salir del programa con un código de error
            System.exit(1);
        }

        System.out.println("Fin del programa");
    }
}
