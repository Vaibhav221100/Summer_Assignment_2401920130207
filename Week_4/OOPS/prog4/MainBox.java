public class MainBox {

    public static void main(String[] args) {

        Box b = new Box(10, 5);
        System.out.println("Area of Box = " + b.area());

        Box3D b3 = new Box3D(10, 5, 4);
        System.out.println("Area of Box3D = " + b3.area());
        System.out.println("Volume of Box3D = " + b3.volume());
    }
}