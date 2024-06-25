import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Product {
    private String code;
    private String description;
    private int quantity;

    public Product(String code, String description, int quantity) {
        this.code = code;
        this.description = description;
        this.quantity = quantity;
    }

    public String getCode() {
        return code;
    }

    public String getDescription() {
        return description;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    @Override
    public String toString() {
        return description + " - Code: " + code + " - Quantity: " + quantity;
    }
}

class Inventory {
    private ArrayList<Product> products = new ArrayList<>();

    public void addProduct(String code, String description, int quantity) {
        products.add(new Product(code, description, quantity));
    }

    public void updateQuantity(String code, int quantity) {
        for (Product product : products) {
            if (product.getCode().equals(code)) {
                product.setQuantity(quantity);
                return;
            }
        }
        System.out.println("Product not found!");
    }

    public void searchProduct(String code) {
        for (Product product : products) {
            if (product.getCode().equals(code)) {
                System.out.println("Product found: " + product);
                return;
            }
        }
        System.out.println("Product not found!");
    }

    public void listProducts() {
        Collections.sort(products, Comparator.comparing(Product::getDescription));
        System.out.println("Product List:");
        for (Product product : products) {
            System.out.println(product);
        }
    }
}

public class InventoryManagementSystem {
    public static void main(String[] args) {
        Inventory inventory = new Inventory();
        Scanner scanner = new Scanner(System.in);
        int choice;

        do {
            displayMenu();
            choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter product code: ");
                    String code = scanner.nextLine();
                    System.out.print("Enter product description: ");
                    String description = scanner.nextLine();
                    System.out.print("Enter product quantity: ");
                    int quantity = scanner.nextInt();
                    inventory.addProduct(code, description, quantity);
                    break;
                case 2:
                    System.out.print("Enter product code: ");
                    code = scanner.nextLine();
                    System.out.print("Enter new quantity: ");
                    quantity = scanner.nextInt();
                    inventory.updateQuantity(code, quantity);
                    break;
                case 3:
                    System.out.print("Enter product code: ");
                    code = scanner.nextLine();
                    inventory.searchProduct(code);
                    break;
                case 4:
                    inventory.listProducts();
                    break;
                case 5:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice! Please try again.");
                    break;
            }

            System.out.println();
        } while (choice != 5);

        scanner.close();
    }

    private static void displayMenu() {
        System.out.println("Inventory Management System");
        System.out.println("1. Add Product");
        System.out.println("2. Update Product Quantity");
        System.out.println("3. Search Product");
        System.out.println("4. List Products");
        System.out.println("5. Exit");
        System.out.print("Choose an option: ");
    }
}
