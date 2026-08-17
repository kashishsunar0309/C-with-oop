#include <iostream>
using namespace std;

class volume
{
    int l, b, h, v;

public:
    // Default constructor
    volume()
    {
        l = b = h = 0;
    }

    // Parameterized constructor
    volume(int a, int c, int d)
    {
        l = a;
        b = c;
        h = d;
    }

    // Public function
    void display()
    {
        v = l * b * h;
        cout << "VOLUME: " << v << endl;
    }
};

int main()
{
    volume v1;          // Calls default constructor
    volume v2(2, 3, 4); // Calls parameterized constructor

    v1.display(); // Prints 0
    v2.display(); // Prints 24

    return 0;
}
