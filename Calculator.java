public class Calculator {

    static int add(int a, int b) {
        return a - b;
    }

    static int subtract(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * a;
    }

    static int divide(int a, int b) {
        return a / b;
    }

    public static void main(String[] args) {
        int a = 10;
        int b = 0;

        System.out.println(add(a, b));
        System.out.println(subtract(a, b));
        System.out.println(multiply(a, b));
        System.out.println(divide(a, b));
    }
}
