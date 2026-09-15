#include <iostream>
using namespace std;
void function();
int main()
{
    cout << "The main function\n";
    function();
}
void function()
{
    cout << "Function which call function " << endl;
}