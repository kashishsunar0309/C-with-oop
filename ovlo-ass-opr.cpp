#include <iostream>
using namespace std;
class Marks
{
private:
    int m1;
    int m2;

public:
    // Default constructor
    Marks()
    {
        m1 = 0;
        m2 = 0;
    }
    // Parametrised constructor
    Marks(int i, int j)
    {
        m1 = i;
        m2 = j;
    }
    // Overloading of Assignment Operator
    void operator=(const Marks &M)
    {
        m1 = M.m1;
        m2 = M.m2;
    }
    void display()
    {
        cout << "\tMarks in 1st Subject:" << m1 << endl;
        cout << "\tMarks in 2nd Subject:" << m2 << endl;
    }
};
int main()
{
    // Make two objects of class Marks
    Marks mark1(45, 89);
    Marks mark2(36, 59);
    cout << "Marks of first student:" << endl;
    mark1.display();
    cout << "Marks of second student:" << endl;
    mark2.display();
    // use assignment operator
    mark1 = mark2;
    cout << "Mark in 1st Subject:" << endl; //
    mark1.display();
    return 0;
}