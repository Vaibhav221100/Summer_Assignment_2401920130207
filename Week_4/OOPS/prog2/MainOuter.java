public class MainOuter {

    public static void main(String[] args) {

        // Create object of Outer class
        Outer outer = new Outer();
        outer.display();

        // Create object of Inner class
        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}