#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;
};
int main()
{
    student s1;
    s1.roll = 101;
    s1.name = "Amit";
    student s2 = s1;
    cout << s2.roll << endl
         << s2.name;
}