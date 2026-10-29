// Overloading Unary operators
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void operator++()
    {
        ++length;
        ++breadth;
    }
    void display()
    {
        cout << "Length:-" << length << endl
             << "Breadth:-" << breadth;
    }
};
int main()
{
    rectangle r1(5, 6);
    ++r1;
    r1.display();
    return 0;
}