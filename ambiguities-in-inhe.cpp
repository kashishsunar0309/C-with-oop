#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "This is class A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "This is class B" << endl;
    }
};
class C : public A, public B
{
};
/*##USE THIS WHICH MAKE NOT AMBIGUITY INHERITANCE###
class C : public A, public B {
public:
    void show() {
        A::show();   // Calls A's show()
        // B::show(); // Use this instead if desired
    }
};*/
int main()
{
    C c;

    // c.show();    // ERROR: ambiguous
    c.A::show(); // OK
    c.B::show(); // OK
    return 0;
}