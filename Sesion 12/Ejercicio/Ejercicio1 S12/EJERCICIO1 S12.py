class Inventory:
    def __init__(self):
        self.products = {}

    def add_product(self, code, description, quantity):
        self.products[code] = {'description': description, 'quantity': quantity}

    def update_quantity(self, code, quantity):
        if code in self.products:
            self.products[code]['quantity'] = quantity
        else:
            print("Product not found!")

    def search_product(self, code):
        if code in self.products:
            product = self.products[code]
            print(f"Product found: {product['description']} - Quantity: {product['quantity']}")
        else:
            print("Product not found!")

    def list_products(self):
        sorted_products = sorted(self.products.values(), key=lambda x: x['description'])
        print("Product List:")
        for product in sorted_products:
            print(f"{product['description']} - Code: {self.get_code_by_description(product['description'])} - Quantity: {product['quantity']}")

    def get_code_by_description(self, description):
        for code, product in self.products.items():
            if product['description'] == description:
                return code

def display_menu():
    print("Inventory Management System")
    print("1. Add Product")
    print("2. Update Product Quantity")
    print("3. Search Product")
    print("4. List Products")
    print("5. Exit")
    return int(input("Choose an option: "))

def main():
    inventory = Inventory()
    choice = 0

    while choice != 5:
        choice = display_menu()
        
        if choice == 1:
            code = input("Enter product code: ")
            description = input("Enter product description: ")
            quantity = int(input("Enter product quantity: "))
            inventory.add_product(code, description, quantity)
        elif choice == 2:
            code = input("Enter product code: ")
            quantity = int(input("Enter new quantity: "))
            inventory.update_quantity(code, quantity)
        elif choice == 3:
            code = input("Enter product code: ")
            inventory.search_product(code)
        elif choice == 4:
            inventory.list_products()
        elif choice == 5:
            print("Exiting...")
        else:
            print("Invalid choice! Please try again.")
        print()

if __name__ == "__main__":
    main()
