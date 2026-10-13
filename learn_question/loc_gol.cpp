#include <iostream>
using namespace std;
int g = 20; // global variable
int main()
{
    int i = 10; // local variable
    if (i < 20) // If condition scope starts
    {
        int n = 100; // Local variable
        cout << "Inside if" << endl;
        cout << "g=" << g << endl;
        cout << "i=" << i << endl;
        cout << "n=" << n << endl;
    } // If conditions scope ends
    cout << endl
         << "==================" << endl;
    cout << "Below if" << endl;
    cout << "g=" << g << endl;
    cout << "i=" << i << endl;
    // cout<<"n="<<n<<endl;--error cannot be accessed here
}