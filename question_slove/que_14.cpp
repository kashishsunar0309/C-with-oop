/*WAP to show constructor overloading*/
#include <iostream>
using namespace std;
class items
{
    int code, price;

public:
    items()
    {
        price = code = 0;
    }
    items(int c, int p)
    {
        code = c;
        price = p;
    }
    items(items &x)
    {
        code = x.code;
        price = x.price;
    }
    void display()
    {
        cout << "==================================" << endl;
        cout << "a: " << code << endl
             << "b: " << price << endl;
    }
};
int main()
{
    items i;
    items i1(102, 104);
    items i2(i1);
    i.display();
    i1.display();
    i2.display();
    return 0;
}