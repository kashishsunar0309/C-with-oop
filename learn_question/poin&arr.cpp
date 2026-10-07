// Pointer and Arrays.
/*Pointer:
    data type *var-name;
*/
#include <iostream>
const int MAX = 5;
using namespace std;
int main()
{
    int var[MAX] = {10, 20, 30, 40, 50};
    int *p;
    p = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] =" << *p << endl;
        p++; // point to the next location
    }
    cout << "======New-concept======" << endl;
    // Concept of variable,address,pointer.
    int a = 10; // variable deceleration
    int *num;   // pointer decleration
    num = &a;   // pointer decleration with store the value of varaible;
    cout << "Variable [a] =" << a << endl;
    cout << "Pointer address[num]= " << num << endl;
    cout << "Pointer with variable value [num-variable] = " << *num << endl;
    return 0;
}