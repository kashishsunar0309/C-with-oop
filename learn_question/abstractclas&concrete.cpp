#include <iostream>
using namespace std;
class Polygon // abstract class
{
protected:
    int width, height;

public:
    void setvalues(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area(void) = 0;
};
class Rectangle : public Polygon // concrete class
{
public:
    int area(void)
    {
        return (width * height);
    }
};
class Triangle : public Polygon // concrete class
{
public:
    int area(void)
    {
        return (width * height / 2);
    }
};
int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *poly = &rect;
    poly->setvalues(4, 5);
    cout << "Area of Rectangle==" << poly->area() << endl;
    poly = &trgl;
    poly->setvalues(6, 5);
    cout << "Area of Triangle==" << poly->area() << endl;
    return 0;
}