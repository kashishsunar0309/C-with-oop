#include <iostream>
using namespace std;
int g; // global variable
void test()
{
    static int s;   // Stactic variable
    register int r; // Register Variable
    r = 5;
    s = s + r * 2;
    cout << "g: " << g << endl;
    cout << "s: " << s << endl;
    cout << "r: " << r << endl;
}
int main()
{
    int a; // local variable
    g = 25;
    a = 17;
    test();
    cout << "Inside: " << endl;
    cout << "g: " << g << endl;
    cout << "a: " << a << endl;
    cout << "===========" << endl;
    test();
    return 0;
}