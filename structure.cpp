#include <iostream>
using namespace std;

struct
{
    int my_Num;
    string mystrings;
} mystructure;
int main()
{

    mystructure.my_Num = 1;
    mystructure.mystrings = "Hello World!";

    cout << mystructure.my_Num << endl;
    cout << mystructure.mystrings << endl;
}