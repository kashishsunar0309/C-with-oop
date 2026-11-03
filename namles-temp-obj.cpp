// Nameless Temporary Objects.
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inches;

public:
    Distance()
    {
        feet = inches = 0;
    }
    Distance(int f, int in)
    {
        feet = f;
        inches = in;
    }
    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
    Distance operator+(Distance d2)
    {
        int ft = feet + d2.feet;
        int in = inches + d2.inches;
        ft = ft + in / 12;
        in = in % 12;
        return Distance(ft, in); // nameless temporary object
    }
};
int main()
{
    Distance d1(5, 6), d2(7, 8), d3;
    d3 = d1 + d2;
    cout << "d1=";
    d1.display();
    cout << "d2=";
    d2.display();
    cout << "d3=";
    d3.display();
    return 0;
}