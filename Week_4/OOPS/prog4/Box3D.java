class Box3D extends Box {

    private double height;

    // Constructor
    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    // Find volume
    public double volume() {
        return length * breadth * height;
    }
}