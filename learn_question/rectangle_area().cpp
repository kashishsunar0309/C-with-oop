#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    void show(int l, int b)
    {
        length = l;
        breath = b;
    }
    void result()
    {
        cout << "Length: " << length << ", Breath: " << breath << endl;
    }
    int area()
    {
        return length * breath;
    }
    int findpremeter()
    {
        return 2 * length * breath;
    }
};
int main()
{
    rectangle r;
    r.show(4, 5);
    r.result();
    cout << "Area: " << r.area() << endl;
    cout << "FindPremeter: " << r.findpremeter();
    return 0;
}