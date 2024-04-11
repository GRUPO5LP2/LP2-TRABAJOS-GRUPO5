abstract class PaymentMethod {
    public abstract void pay(int amount);
}

class CashPayment extends PaymentMethod {
    @Override
    public void pay(int amount) {
        System.out.println("Pagando $"+amount+" en efectivo");
    }
}

class CreditCardPayment extends PaymentMethod {
    @Override
    public void pay(int amount) {
        System.out.println("Pagando $"+amount+" con tarjeta de crédito");
    }
}

class Purchase {
    private int amount;
    private PaymentMethod paymentMethod;

    public Purchase(int amount, PaymentMethod paymentMethod) {
        this.amount = amount;
        this.paymentMethod = paymentMethod;
    }

    public void processPayment() {
        paymentMethod.pay(amount);
    }
}

public class Main {
    public static void main(String[] args) {
        PaymentMethod cashPayment = new CashPayment();
        Purchase purchase1 = new Purchase(50, cashPayment);
        purchase1.processPayment();

        PaymentMethod creditCardPayment = new CreditCardPayment();
        Purchase purchase2 = new Purchase(100, creditCardPayment);
        purchase2.processPayment();
    }
}