// Example of friend function
#include <iostream>
using namespace std;
class beta;
class alpha
{
private:
    int data;

public:
    void setdata(int d)
    {
        data = d;
    }
    friend int sum(alpha, beta);
};
class beta
{
private:
    int data;

public:
    void setdata(int d)
    {
        data = d;
    }
    friend int sum(alpha, beta);
};
int sum(alpha a, beta b)
{
    return a.data + b.data;
}
int main()
{
    alpha a;
    beta b;
    a.setdata(7);
    b.setdata(3);
    cout << "Sum: " << sum(a, b);
    return 0;
}