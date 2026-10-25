#include <iostream>
using namespace std;

int x;     // global x (zero-initialized)
int z = 7; // definition of z, needed for "extern int z"

void fun()
{
    static int y = 3; // static local variable: usable by local class
    int x = 1;        // auto local variable: hides global x, NOT usable by local class
    extern int z;     // refers to global z

    class local
    {       // fixed: added the missing {
    public: // fixed: members must be public to be called from fun()
        int a()
        {
            return 0; // local x cannot be used here, so we return a fixed value
        }
        int b()
        {
            return y; // valid: static y
        }
        int c()
        {
            return ::x; // valid: global x (the :: forces the global one)
        }
        int d()
        {
            return z; // valid: extern z
        }
    }; // end of class

    local obj;
    cout << "a() = " << obj.a() << endl;
    cout << "b() = " << obj.b() << endl;
    cout << "c() = " << obj.c() << endl;
    cout << "d() = " << obj.d() << endl;
}

int main()
{
    fun();
    return 0;
}