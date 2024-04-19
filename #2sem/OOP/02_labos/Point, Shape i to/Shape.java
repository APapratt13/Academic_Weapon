abstract class Shape{
    private Point center;

    public Shape(Point center) {
        this.center = center;
    }

    public Point getCenter() {
        return center;
    }

    public abstract boolean contains(Point p);
    public abstract Rectangle boundingBox();
    public abstract double area();
    public abstract double difference(Shape shape);

}
/*smisao ima jednio ako je Shape apstraktna klasa
* i metode jesu abstract jer kaze moguce je koristiti
* i onda sto ta metoda radi pises u classu rectangle i circle*/
