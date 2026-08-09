#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    string food = "Apple";
    string *ptr = &food;
    cout << food << " Pointer value is " << ptr << endl;
    cout << a << " Pointer value is " << p;
    return 0;
}