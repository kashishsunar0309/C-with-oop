#include <iostream>
using namespace std;
class rectangle
{
private:
    int l;
    int b;

public:
    void show()
    {
        cout << "Enter the length and breath: ";
        cin >> l >> b;
    }
    int result()
    {
        return l * b;
    }
};
int main()
{
    rectangle r;
    r.show();
    cout << "Result: " << r.result();
    return 0;
}