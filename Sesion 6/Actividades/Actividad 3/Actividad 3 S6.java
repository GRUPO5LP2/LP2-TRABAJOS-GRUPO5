class Banco {
    static double tasa_interes = 0.05;

    static void cambiar_tasa_interes(double nueva_tasa) {
        tasa_interes = nueva_tasa;
    }
}

class CuentaBancaria {
    private double saldo;

    public CuentaBancaria(double saldoInicial) {
        saldo = saldoInicial;
    }

    public void depositar(double cantidad) {
        saldo += cantidad;
    }

    public void retirar(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            System.out.println("Saldo insuficiente");
        }
    }

    public double calcular_interes() {
        return saldo * Banco.tasa_interes;
    }
}

public class Main {
    public static void main(String[] args) {
        CuentaBancaria cuenta1 = new CuentaBancaria(1000);
        System.out.println("Saldo actual: " + obtener_saldo(cuenta1));

        Banco.cambiar_tasa_interes(0.06);
        System.out.println("Nueva tasa de interés: " + Banco.tasa_interes);

        cuenta1.depositar(500);
        System.out.println("Saldo después del depósito: " + obtener_saldo(cuenta1));

        cuenta1.retirar(200);
        System.out.println("Saldo después del retiro: " + obtener_saldo(cuenta1));

        double interes_ganado = cuenta1.calcular_interes();
        System.out.println("Interés ganado: " + interes_ganado);
    }

    static double obtener_saldo(CuentaBancaria cuenta) {
        return cuenta.saldo;
    }
}
