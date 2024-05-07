class Contador {
    private static int contadorTotal = 0;
    private int id;

    Contador() {
        contadorTotal++;
        id = contadorTotal;
    }

    static int getTotalContadores() {
        return contadorTotal;
    }

    int getId() {
        return id;
    }
}

public class Main {
    public static void main(String[] args) {
        Contador c1 = new Contador();
        Contador c2 = new Contador();
        Contador c3 = new Contador();

        System.out.println("Total de contadores creados: " + Contador.getTotalContadores());
        System.out.println("ID de c1: " + c1.getId());
        System.out.println("ID de c2: " + c2.getId());
        System.out.println("ID de c3: " + c3.getId());
    }
}
