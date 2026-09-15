#include <iostream>
using namespace std;
int main()
{
    int number[5] = {10, 20, 30, 40, 50};
    cout << sizeof(number) << endl;                     // by the help of bytes.
    cout << sizeof(number) / sizeof(number[0]) << endl; // size of array for elements
    return 0;
}