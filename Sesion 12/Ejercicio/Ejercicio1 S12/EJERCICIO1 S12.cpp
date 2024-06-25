#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Inventory {
private:
    struct Product {
        string code;
        string description;
        int quantity;
    };

    map<string, Product> products;

public:
    void addProduct(const string& code, const string& description, int quantity) {
        products[code] = { code, description, quantity };
    }

    void updateQuantity(const string& code, int quantity) {
        if (products.find(code) != products.end()) {
            products[code].quantity = quantity;
        } else {
            cout << "Product not found!" << endl;
        }
    }

    void searchProduct(const string& code) {
        auto it = products.find(code);
        if (it != products.end()) {
            cout << "Product found: " << it->second.description << " - Quantity: " << it->second.quantity << endl;
        } else {
            cout << "Product not found!" << endl;
        }
    }

    void listProducts() {
        vector<Product> productList;
        for (const auto& pair : products) {
            productList.push_back(pair.second);
        }

        sort(productList.begin(), productList.end(), [](const Product& a, const Product& b) {
            return a.description < b.description;
        });

        cout << "Product List:" << endl;
        for (const auto& product : productList) {
            cout << product.description << " - Code: " << product.code << " - Quantity: " << product.quantity << endl;
        }
    }
};

void displayMenu() {
    cout << "Inventory Management System" << endl;
    cout << "1. Add Product" << endl;
    cout << "2. Update Product Quantity" << endl;
    cout << "3. Search Product" << endl;
    cout << "4. List Products" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    Inventory inventory;
    int choice;
    string code, description;
    int quantity;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter product code: ";
                cin >> code;
                cin.ignore(); 
                cout << "Enter product description: ";
                getline(cin, description);
                cout << "Enter product quantity: ";
                cin >> quantity;
                inventory.addProduct(code, description, quantity);
                break;
            case 2:
                cout << "Enter product code: ";
                cin >> code;
                cout << "Enter new quantity: ";
                cin >> quantity;
                inventory.updateQuantity(code, quantity);
                break;
            case 3:
                cout << "Enter product code: ";
                cin >> code;
                inventory.searchProduct(code);
                break;
            case 4:
                inventory.listProducts();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
