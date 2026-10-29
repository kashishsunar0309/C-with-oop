// Post-fix overloading operator.
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    void operator++(int)
    {
        length++;
        breath++;
    }
    void display()
    {
        cout << "Length:-" << length << endl
             << "Breath:-" << breath << endl;
    }
};
int main()
{
    rectangle r1(7, 9);
    r1++;
    r1.display();
    return 0;
}