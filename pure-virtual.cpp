// Pure Virtual Functions
#include <iostream>
using namespace std;
class base
{
private:
    int x, y;

public:
    virtual void getdata() = 0; // Pure Virtual Function
    virtual void display() = 0; // Pure Virtual Function
    virtual ~base() {}
};
class derived : public base
{
    // Data Members
    int a, b;

public:
    // Member Functions
    void getdata() override
    {
        cout << "Enter two integers: ";
        cin >> a >> b;
    }

    void display() override
    {
        cout << "a = " << a << ", b = " << b << endl;
        cout << "Sum = " << a + b << endl;
    }
};
int main()
{
    base *ptr = new derived(); // base is abstract, so we use a derived object
    ptr->getdata();
    ptr->display();
    delete ptr;
    return 0;
}