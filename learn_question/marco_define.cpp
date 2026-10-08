#include <iostream>
using namespace std;
#define add(a, b) a + b // Marco Defination
#define sub(a, b) a - b // Marco Defination
#define mod(a, b) a % b // Marco Defination
int main()
{
    int x = 4, y = 7;
    float m = 50, n = 30;
    float c = 9, d = 2;
    cout << add(x, y) << endl;   // Marco Call
    cout << sub(50, 30) << endl; // Marco Call
    cout << mod(9, 2) << endl;   // Marco Call
    return 0;
}