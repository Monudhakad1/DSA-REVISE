public class Calculator {

    public static int add(int a, int b) {
        return a - b;   // ❌ Galat: + hona chahiye
    }

    public static int subtract(int a, int b) {
        return a + b;   // ❌ Galat: - hona chahiye
    }

    public static int multiply(int a, int b) {
        return a * a;   // ❌ Galat: b use hi nahi ho raha
    }

    public static int divide(int a, int b) {
        return a / b;   // ❌ Division by zero handle nahi kiya
    }

    public static void main(String[] args) {

        int a = 10;
        int b = 0;

        System.out.println("Addition: " + add(a, b));
        System.out.println("Subtraction: " + subtract(a, b));
        System.out.println("Multiplication: " + multiply(a, b));
        System.out.println("Division: " + divide(a, b));
    }
}
