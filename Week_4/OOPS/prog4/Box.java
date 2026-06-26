class Box {

    protected double length;
    protected double breadth;

    // Constructor
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Find area
    public double area() {
        return length * breadth;
    }
}