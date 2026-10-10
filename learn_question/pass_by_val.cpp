#include <iostream>
using namespace std;

// Function that takes parameter by value
void square(int num)
{
    num = num * num; // modifies only the local copy
    cout << "Inside function: " << num << endl;
}

int main()
{
    int x = 5;

    cout << "Before function call: " << x << endl;
    square(x); // pass by value

    cout << "After function call: " << x << endl;

    return 0;
}
