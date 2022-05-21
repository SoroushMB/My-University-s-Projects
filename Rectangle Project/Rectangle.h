class Rectangle 
{
    float l;
    float w;
public:
    Rectangle();
    void SetLength(float);
    float GetLength();
    void SetWidth(float);
    float GetWidth();
    float Area();
    float Circumference();
};

Rectangle::Rectangle()
{
    l = 7;
    w = 6;
}

void Rectangle::SetLength(float length)
{
    l = length;
}
float Rectangle::GetLength()
{
    return l;
}
void Rectangle::SetWidth(float width)
{
    w = width;
}
float Rectangle::GetWidth()
{
    return w;
}
float Rectangle::Area()
{
    return l * w;
}

float Rectangle::Circumference()
{
    return (l + w) * 2;
}