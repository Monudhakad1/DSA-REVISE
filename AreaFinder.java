public class AreaFinder {

    public static double rectangleArea(double length, double width) {
        return length + width;
    }

    public static double circleArea(double radius) {
        return 2 * 3.14 * radius;
    }

    public static double triangleArea(double base, double height) {
        return base * height;
    }

    public static void main(String[] args) {
        System.out.println("Rectangle Area: " + rectangleArea(10, 5));
        System.out.println("Circle Area: " + circleArea(7));
        System.out.println("Triangle Area: " + triangleArea(8, 6));
    }
}
