#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    void getdata()
    {
        cout << "Enter the real and img number: ";
        cin >> real >> img;
    }
    Complex &additional(Complex &c)
    { // Return by reference
        c.real = real + c.real;
        c.img = img + c.img;
        return c;
    }
    void display()
    {
        cout << "(" << real << "+i" << img << ")" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    cout << "=============" << endl;
    c3 = c1.additional(c2);
    cout << "Sum of them: ";
    c3.display();
    return 0;
}