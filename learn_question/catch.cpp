// Program using multiple catch block  for a single try block
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size::" << endl;
    cin >> size;
    try
    {
        char *mystring;
        if (size <= 0)
            throw 's';
        mystring = new char[size];
        for (int n = 0; n <= 100; n++)
        {
            if (n > size - 1)
                throw n;
        }
    }
    catch (int i)
    {
        cout << "Exception::";
        cout << "Index" << i << "is out of range" << endl;
    }
    catch (char c)
    {
        cout << "Exception::" << "Size must be non-zero positive number." << endl;
    }
    return 0;
}