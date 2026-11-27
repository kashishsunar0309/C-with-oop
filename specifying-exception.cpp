// Program to restrict the exception that can be thrown from a function
#include <iostream>
using namespace std;

void test(int x)
{
    if (x == 0)
        throw x;
    if (x == 1)
        throw 1.0;
    if (x == 2)
        throw 'a';
}

int main()
{
    int n;
    cout << "Enter a number{0,1,2}::" << endl;
    cin >> n;
    try
    {
        test(n);
    }
    catch (int m)
    {
        cout << "Caught an integer\n";
    }
    catch (double d)
    {
        cout << "Caught a double";
    }
    catch (char c)
    {
        cout << "Caught a character";
    }
    return 0;
}