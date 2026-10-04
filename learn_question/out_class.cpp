/*
Defining member function outside the class.Example.
*/ \
#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    void setdata(int l, int b)
    {
        length = l;
        breath = b;
    }
    void show();
    int area();
    int perimeter();
};
void rectangle::show()
{
    cout << "Length: " << length << endl
         << "Breath: " << breath << endl;
}
int rectangle::area()
{
    return length * breath;
}
int rectangle::perimeter()
{
    return 2 * (length + breath);
}
int main()
{
    int a, p;
    rectangle r;
    r.setdata(4, 5);
    r.show();
    a = r.area();
    cout << "Area: " << a << endl;
    p = r.perimeter();
    cout << "Perimeter: " << p;
    return 0;
}