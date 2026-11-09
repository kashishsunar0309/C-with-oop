// Protected Access Specifier
#include <iostream>
using namespace std;

class BASE
{
private:
    int x; // accessible only inside BASE
protected:
    int y; // accessible in BASE and derived classes
public:
    int z; // accessible everywhere
};

class Derived : public BASE
{
public:
    void getdata()
    {
        cout << "Enter y and z:" << endl;
        // cin >> x;   // Error: x is private to BASE
        cin >> y; // Valid: y is protected, so Derived can access it
        cin >> z; // Valid: z is public
    }
};

int main()
{
    Derived d;
    d.getdata();
    // cout << d.x;   // Error: x is private
    // cout << d.y;   // Error: y is protected, not accessible from main
    cout << "z=" << d.z << endl; // Valid: z is public
    return 0;
}