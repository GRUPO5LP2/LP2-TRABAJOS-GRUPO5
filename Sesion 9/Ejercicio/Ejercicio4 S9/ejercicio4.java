import java.util.Scanner;

abstract class Personajes {
    protected String nombre;
    protected int edad;
    protected String arma;
    protected String habilidadespecial;

    public Personajes(String n, int e, String a, String he) {
        this.nombre = n;
        this.edad = e;
        this.arma = a;
        this.habilidadespecial = he;
    }

    public abstract void atacar();

    public abstract void defender();

    public abstract void habilidadEspecial();

    public String getNombre() {
        return nombre;
    }

    public int getEdad() {
        return edad;
    }

    public String getArma() {
        return arma;
    }

    public String getHabilidadEspecial() {
        return habilidadespecial;
    }
}

class Guerreros extends Personajes {
    public Guerreros(String n, int e, String a, String he) {
        super(n, e, a, he);
    }

    @Override
    public void atacar() {
        System.out.println("El guerrero " + nombre + " te ataca con su " + arma + "!!");
    }

    @Override
    public void defender() {
        System.out.println("El guerrero " + nombre + " se defiende!");
    }

    @Override
    public void habilidadEspecial() {
        System.out.println("El guerrero " + nombre + " lanza su habilidad especial " + habilidadespecial + "!!");
    }
}

class Magos extends Personajes {
    private String elemento;

    public Magos(String n, int e, String a, String he, String elem) {
        super(n, e, a, he);
        this.elemento = elem;
    }

    @Override
    public void atacar() {
        System.out.println("El mago " + nombre + " te ataca con su " + arma + "!!");
    }

    @Override
    public void defender() {
        System.out.println("El mago " + nombre + " se defiende!");
    }

    @Override
    public void habilidadEspecial() {
        System.out.println("El mago " + nombre + " lanza su habilidad especial " + habilidadespecial + "!!");
    }
}

class Arqueros extends Personajes {
    private String tipoflecha;

    public Arqueros(String n, int e, String a, String he, String tf) {
        super(n, e, a, he);
        this.tipoflecha = tf;
    }

    @Override
    public void atacar() {
        System.out.println("El arquero " + nombre + " te ataca con su " + arma + "!!");
    }

    @Override
    public void defender() {
        System.out.println("El arquero " + nombre + " se defiende!");
    }

    @Override
    public void habilidadEspecial() {
        System.out.println("El arquero " + nombre + " lanza su habilidad especial " + habilidadespecial + "!!");
    }
}

class ejercicio4 {
    static Scanner scanner = new Scanner(System.in);

    static void limpiarPantalla() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                new ProcessBuilder("clear").inheritIO().start().waitFor();
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    static int menu() {
        int opc;
        System.out.println("====== MENU PERSONAJES ======");
        System.out.println("1. Crear Guerrero");
        System.out.println("2. Crear Mago");
        System.out.println("3. Crear Arquero");
        System.out.println("4. Salir ");
        System.out.print("Ingresa tu opción: ");
        opc = scanner.nextInt();
        return opc;
    }

    static int menuMetodos() {
        int opc;
        System.out.println("====== MENU METODOS ======");
        System.out.println("1. Atacar!");
        System.out.println("2. Defenderse!");
        System.out.println("3. Lanzar habilidad especial!");
        System.out.println("4. Salir ");
        System.out.print("Ingresa tu opción: ");
        opc = scanner.nextInt();
        return opc;
    }

    public static void main(String[] args) {
        int opcion, edad;
        String nombre, arma, habilidadespecial, elemento, tipoflecha;
        int cont = 0;
        Personajes[] arrayPersonajes = new Personajes[100];

        while (true) {
            limpiarPantalla();
            opcion = menu();
            if (opcion == 1) {
                limpiarPantalla();
                System.out.print("Ingrese el nombre del Guerrero: ");
                nombre = scanner.next();
                System.out.print("Ingrese la edad del Guerrero: ");
                edad = scanner.nextInt();
                System.out.print("Ingrese el arma del Guerrero: ");
                arma = scanner.next();
                System.out.print("Ingrese la habilidad especial del Guerrero: ");
                habilidadespecial = scanner.next();
                arrayPersonajes[cont] = new Guerreros(nombre, edad, arma, habilidadespecial);
                while (true) {
                    limpiarPantalla();
                    opcion = menuMetodos();
                    if (opcion == 1) {
                        arrayPersonajes[cont].atacar();
                    } else if (opcion == 2) {
                        arrayPersonajes[cont].defender();
                    } else if (opcion == 3) {
                        arrayPersonajes[cont].habilidadEspecial();
                    } else {
                        break;
                    }
                    System.out.print("Presiona enter para continuar...");
                    scanner.nextLine(); // Consumir la nueva línea
                    scanner.nextLine(); // Esperar la entrada del usuario
                }
                cont++;
            } else if (opcion == 2) {
                limpiarPantalla();
                System.out.print("Ingrese el nombre del Mago: ");
                nombre = scanner.next();
                System.out.print("Ingrese la edad del Mago: ");
                edad = scanner.nextInt();
                System.out.print("Ingrese el arma del Mago: ");
                arma = scanner.next();
                System.out.print("Ingrese la habilidad especial del Mago: ");
                habilidadespecial = scanner.next();
                System.out.print("Ingrese el elemento del Mago: ");
                elemento = scanner.next();
                arrayPersonajes[cont] = new Magos(nombre, edad, arma, habilidadespecial, elemento);
                while (true) {
                    limpiarPantalla();
                    opcion = menuMetodos();
                    if (opcion == 1) {
                        arrayPersonajes[cont].atacar();
                    } else if (opcion == 2) {
                        arrayPersonajes[cont].defender();
                    } else if (opcion == 3) {
                        arrayPersonajes[cont].habilidadEspecial();
                    } else {
                        break;
                    }
                    System.out.print("Presiona enter para continuar...");
                    scanner.nextLine(); // Consumir la nueva línea
                    scanner.nextLine(); // Esperar la entrada del usuario
                }
                cont++;
            } else if (opcion == 3) {
                limpiarPantalla();
                System.out.print("Ingrese el nombre del Arquero: ");
                nombre = scanner.next();
                System.out.print("Ingrese la edad del Arquero: ");
                edad = scanner.nextInt();
                System.out.print("Ingrese el arma del Arquero: ");
                arma = scanner.next();
                System.out.print("Ingrese la habilidad especial del Arquero: ");
                habilidadespecial = scanner.next();
                System.out.print("Ingrese el tipo de flecha que usa el Arquero: ");
                tipoflecha = scanner.next();
                arrayPersonajes[cont] = new Arqueros(nombre, edad, arma, habilidadespecial, tipoflecha);
                while (true) {
                    limpiarPantalla();
                    opcion = menuMetodos();
                    if (opcion == 1) {
                        arrayPersonajes[cont].atacar();
                    } else if (opcion == 2) {
                        arrayPersonajes[cont].defender();
                    } else if (opcion == 3) {
                        arrayPersonajes[cont].habilidadEspecial();
                    } else {
                        break;
                    }
                    System.out.print("Presiona enter para continuar...");
                    scanner.nextLine(); // Consumir la nueva línea
                    scanner.nextLine(); // Esperar la entrada del usuario
                }
                cont++;
            } else {
                break;
            }
        }
    }
}