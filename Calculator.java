public class Calculator {

    public static int add(int a, int b) {
        return a - b;
    }

    public static int subtract(int a, int b) {
        return a + b;
    }

    public static int multiply(int a, int b) {
        return a * a;
    }

    public static int divide(int a, int b) {
        return a * b;
    }

    public static void main(String[] args) {
        int a = 10;
        int b = 5;

        System.out.println("Add: " + add(a, b));
        System.out.println("Subtract: " + subtract(a, b));
        System.out.println("Multiply: " + multiply(a, b));
        System.out.println("Divide: " + divide(a, b));
    }
}
