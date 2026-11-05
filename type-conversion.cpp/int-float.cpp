#include <iostream>
using namespace std;
class dis
{
private:
    int feet;
    int inch;

public:
    dis(int f, int i)
    {
        feet = f;
        inch = i;
    }
    dis(float m)
    {
        feet = int(m);
        inch = 12 * (m - feet);
    }
    void display()
    {
        cout << "Feet:-" << feet << endl
             << "Inch:-" << inch;
    }
};
int main()
{
    float f = 2.5;
    dis d = f; // Conversion from basic
    d.display();
    return 0;
}