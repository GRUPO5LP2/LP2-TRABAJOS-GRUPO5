#include <iostream>
#include <vector>
using namespace std;

class PaymentMethod
{
public:
   virtual void pay(double amount) = 0;
   virtual ~PaymentMethod() {}
};
// Clase para representar un pago en efectivo
class CashPayment : public PaymentMethod {
public:
 void pay(double amount) override
 {
   cout << "Pagando $" << amount << " en efectivo\n";
 }
};
// Clase para representar un pago con tarjeta de crédito
class CreditCardPayment : public PaymentMethod {
public:
 void pay(double amount) override
 {
   cout << "Pagando $" << amount << " con tarjeta de crédito\n";
 }
};
// Clase para representar una compra en la tienda
class Purchase
{
private:
   double amount;
   PaymentMethod *paymentMethod;
public:
 Purchase(double amount, PaymentMethod *paymentMethod) : amount(amount), paymentMethod(paymentMethod) {}
 void processPayment()
 {
   paymentMethod->pay(amount);
 }
};
// Función para procesar una compra con un tipo de pago determinado
void processPurchase(double amount, PaymentMethod *paymentMethod)
{
   Purchase purchase(amount, paymentMethod);
   purchase.processPayment();
}

int main()
{
   // Crear una compra de $50 con pago en efectivo
   PaymentMethod *cashPayment = new CashPayment();
   processPurchase(50, cashPayment);
   delete cashPayment;
   // Crear una compra de $100 con pago con tarjeta de crédito
   PaymentMethod *creditCardPayment = new CreditCardPayment();
   processPurchase(100, creditCardPayment);
   delete creditCardPayment;
   return 0;
}
