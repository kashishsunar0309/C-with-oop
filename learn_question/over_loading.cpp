#include <iostream>
using namespace std;
void num_1(int a)
{
    cout << "Integer: " << a << endl;
}
void num_2(double b)
{
    cout << "Float: " << b << endl;
}
int main()
{
    num_1(45);
    num_2(4.5);
    return 0;
}