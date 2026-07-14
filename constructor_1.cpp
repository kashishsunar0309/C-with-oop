#include <iostream>
using namespace std;
class student
{
public:
    int id;
    student(int x)
    {
        id = x;
    }
    void display()
    {
        cout << "ID = " << id;
    }
};
int main()
{
    student s1(100);
    s1.display();
    return 0;
}