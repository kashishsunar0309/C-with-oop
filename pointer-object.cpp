#include <iostream>
using namespace std;
class run
{
public:
    void display()
    {
        cout << "Pointer is the memory address " << endl;
    }
    void lucky_number()
    {
        cout << "My luck number is 9";
    }
};
int main()
{
    run *r = new run;
    r->display();
    r->lucky_number();
    return 0;
}