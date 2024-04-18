class Rectangle extends Shape{
    private int width, height;

    public Rectangle(Point center, int width, int height) {
        super(center);
        this.width = width;
        this.height = height;
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    @Override
    public boolean contains(Point p) {
        return (Math.abs(this.getCenter().getX() - p.getX() ) < width) &&
                (Math.abs(this.getCenter().getY() - p.getY() ) < height);
    }

    @Override
    public Rectangle boundingBox() {
        return new Rectangle(this.getCenter(), width, height);
    }

    @Override
    public double area() {
        return width * height;
    }

    @Override
    public double difference(Shape shape) {
        return Math.abs(this.area() - shape.area());
    }
}
