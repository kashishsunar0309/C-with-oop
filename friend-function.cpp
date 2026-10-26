// Friend Funcitons
#include <iostream>
using namespace std;
class sample
{
    int a;
    int b;

public:
    void getdata()
    {
        a = 25;
        b = 10;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a + s.b) / 2;
}
int main()
{
    sample x;
    x.getdata();
    cout << "Mean:" << mean(x);
    return 0;
}