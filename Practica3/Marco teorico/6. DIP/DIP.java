public interface IBanco {
    void procesarPago(double monto);
}

public class Banco implements IBanco {
    @Override
    public void procesarPago(double monto) {
        System.out.println("Pago procesado en el banco por $" + monto);
    }
}

public class ProcesadorDePagos {
    private IBanco banco;

    public ProcesadorDePagos(IBanco banco) {
        this.banco = banco;
    }

    public void procesarPago(double monto) {
        banco.procesarPago(monto);
        System.out.println("Pago procesado exitosamente");
    }
}

public class Main {
    public static void main(String[] args) {
        IBanco banco = new Banco();
        ProcesadorDePagos procesador = new ProcesadorDePagos(banco);
        procesador.procesarPago(100.0);
    }
}