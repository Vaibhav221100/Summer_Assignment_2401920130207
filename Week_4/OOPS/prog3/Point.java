class Point {

    private int x;
    private int y;

    // Default constructor
    public Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Set x
    public void setX(int x) {
        this.x = x;
    }

    // Set y
    public void setY(int y) {
        this.y = y;
    }

    // Set both x and y
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Display point
    public void display() {
        System.out.println("Point (" + x + ", " + y + ")");
    }
}