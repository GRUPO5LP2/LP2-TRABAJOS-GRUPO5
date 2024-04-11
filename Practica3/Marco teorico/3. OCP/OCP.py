class PaymentMethod:
    def pay(self, amount):
        pass

class CashPayment(PaymentMethod):
    def pay(self, amount):
        print("Pagando $" + str(amount) + " en efectivo")

class CreditCardPayment(PaymentMethod):
    def pay(self, amount):
        print("Pagando $" + str(amount) + " con tarjeta de crédito")

class Purchase:
    def __init__(self, amount, payment_method):
        self.amount = amount
        self.payment_method = payment_method

    def process_payment(self):
        self.payment_method.pay(self.amount)

def process_purchase(amount, payment_method):
    purchase = Purchase(amount, payment_method)
    purchase.process_payment()


cash_payment = CashPayment()
process_purchase(50, cash_payment)
    
credit_card_payment = CreditCardPayment()
process_purchase(100, credit_card_payment)