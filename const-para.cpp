// parameterized constructors
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;
    int sum = 0;

public:
    rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    void show()
    {
        sum = length * breath;
        cout << "The Area is " << sum;
    }
};

int main()
{
    rectangle r(5, 4);
    r.show();
    return 0;
}