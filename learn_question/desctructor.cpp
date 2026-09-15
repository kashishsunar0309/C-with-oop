#include <iostream>
using namespace std;

class MyClass
{
public:
    // Constructor
    MyClass()
    {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~MyClass()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{
    // Constructor is called
    MyClass obj;

    // Destructor is called automatically when obj goes out of scope
    return 0;
}