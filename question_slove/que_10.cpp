/*WAP to add two objects of class complex having data members real and imaginary*/
#include <iostream>
using namespace std;
class complex
{
public:
    double real;
    double imaginary;
    void getdata(double r, double i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
    complex add(complex c2)
    {
        complex temp;
        temp.real = real + temp.real;
        temp.imaginary = imaginary + temp.imaginary;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata(3, 4);
    c2.getdata(2, 5);
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    c3 = c1.add(c2);
    c3.display();
    return 0;
}