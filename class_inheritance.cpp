#include <iostream>
using namespace std;
class parent
{
public:
    void money()
    {
        cout << "The big-money came from the parents help.";
    }
};
class child : public parent
{
};
int main()
{
    child s;
    s.money();
    return 0;
}