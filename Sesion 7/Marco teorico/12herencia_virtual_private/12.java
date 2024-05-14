import java.util.*;

class A {
    private int x;

    public A(int value) {
        x = value;
    }

    public void display() {
        System.out.println("Valor de x: " + x);
    }
}

class B extends A {
    public B(int value) {
        super(value);
    }

    public void show() {
        display(); 
    }
}

public class Main {
    public static void main(String[] args) {
        B objB = new B(10);
        objB.show(); 
    }
}
