// Overloading Unary Operator Using Friend Function.
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    friend void operator++(rectangle &);
    void show()
    {
        cout << "Length:-" << length << endl
             << "Breadth:-" << breadth << endl;
    }
};
void operator++(rectangle &r)
{
    ++r.length;
    ++r.breadth;
}
int main()
{
    rectangle r1(4, 5);
    ++r1;
    r1.show();
    return 0;
}