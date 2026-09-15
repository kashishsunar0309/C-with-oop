#include <iostream>
using namespace std;
int main()
{
    double pi = 3.14;
    int b = 34;
    int c = 45;
    int x = (int)pi;             // C-style cast
    int y = int(b);              // Function-style cast
    int z = static_cast<int>(c); // Static cast
    const int a = 55;            // Constant cast
    int *modifiable = const_cast<int *>(&a);
    *modifiable = 100;
    cout << x << endl
         << y << endl
         << z << endl
         << *modifiable;
    return 0;
}