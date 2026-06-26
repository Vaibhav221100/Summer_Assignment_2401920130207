public class MainPoint {

    public static void main(String[] args) {

        // Default constructor
        Point p1 = new Point();
        p1.display();

        // Parameterized constructor
        Point p2 = new Point(10, 20);
        p2.display();

        // Set x
        p2.setX(30);
        p2.display();

        // Set y
        p2.setY(40);
        p2.display();

        // Set both x and y
        p2.setXY(50, 60);
        p2.display();
    }
}