public class Main {
    static int variableEntera = 0;
    static float variableFlotante = 0;
    static int referenciaVariableEntera = variableEntera;
    static float referenciaVariableFlotante = variableFlotante;

    public static void main(String[] args) {
        System.out.println(referenciaVariableEntera);
        System.out.println(referenciaVariableFlotante);
    }
}
