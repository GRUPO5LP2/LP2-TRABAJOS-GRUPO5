class Clase {
    private int variableEntera;
    private float variableFlotante;

    public Clase() {
        variableEntera = 0;
        variableFlotante = 0;
    }

    public int getVariableEntera() {
        return this.variableEntera;
    }

    public float getVariableFlotante() {
        return this.variableFlotante;
    }
}

public class Main {
    public static void main(String[] args) {
        Clase objeto = new Clase();
        System.out.println(objeto.getVariableEntera());
        System.out.println(objeto.getVariableFlotante());
    }
}
