#include <iostream>
using namespace std;
class B
{
public:
    B()
    {
        cout << "The main Constructor program";
    }
};
class C : public B
{
};
int main()
{
    C obj1;
    return 0;
}