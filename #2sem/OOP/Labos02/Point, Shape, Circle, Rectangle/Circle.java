class Circle extends Shape{
    private int radius;

    public Circle(Point center, int radius) {
        super(center);
        this.radius = radius;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    @Override
    public boolean contains(Point p) {
        return Point.distanceTo(this.getCenter(), p) <= radius;
    }

    @Override
    public Rectangle boundingBox() {
        return new Rectangle(this.getCenter(),2 * radius ,2 * radius);
    }

    @Override
    public double area() {
        return Math.pow(radius, 2)* Math.PI;
    }

    @Override
    public double difference(Shape shape) {
        return Math.abs(this.area() - shape.area());
    }
}
