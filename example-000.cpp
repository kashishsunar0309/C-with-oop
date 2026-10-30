#include <iostream>
using namespace std;
class increase
{
private:
    int num;

public:
    increase()
    {
        cout << "Enter the number:-" << endl;
        cin >> num;
    }
    friend void operator++(increase &a);
    void display()
    {
        cout << "Increase-Result by 1:-" << num;
    }
};
void operator++(increase &a)
{
    ++a.num;
}
int main()
{
    increase a;
    ++a;
    a.display();
    return 0;
}