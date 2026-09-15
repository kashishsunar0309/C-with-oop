#include <iostream>
using namespace std;
class print
{
public:
    void display(int x)
    {
        cout << x << endl;
    }
    void dispaly(double y)
    {
        cout << y;
    }
};
int main()
{
    print obj;
    obj.display(10);
    obj.display(12.5);
    return 0;
}
