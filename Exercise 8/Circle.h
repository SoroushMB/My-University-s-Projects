class Circle
{
        double r;
    public:
        Circle(float);
        void setRadius(float);
        float getRadius();
        float getArea();
        float getCircumference();
};

Circle::Circle(float radius)
{
    setRadius(radius);
}
void Circle::setRadius(float radius)
{
    r = radius;
}
float Circle::getArea()
{
    return 3.14 * r * r;
}
float Circle::getCircumference()
{
    return 2 * r * 3.14;
}