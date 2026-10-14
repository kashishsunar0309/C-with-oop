// WAP to demonstrate default argument,inline function,and function overloading
#include <iostream>
using namespace std;
void show(string msg = "Default-function")
{
    cout << msg << endl;
}
inline void name(string name)
{
    cout << "My name is " << name << endl;
}
int num(int a, int b)
{
    return a + b;
}
float num(float a, float b)
{
    return a / b;
}
int num(int a, int b, int c)
{
    return a * b * c;
}
int main()
{
    show();
    name("Computer");
    cout << "Addittion :" << num(60, 40) << endl;
    cout << "Division :" << num(1010.0f, 10.0f) << endl;
    cout << "Multiply :" << num(10, 11, 3) << endl;
    return 0;
}