/*Nested of Member Functions.*/
#include <iostream>
using namespace std;
class total
{
private:
    float principle, time, rate;
    float findinterest()
    {
        return principle * time * rate / 100;
    }

public:
    void setdata(float p, float t, float r)
    {
        principle = p;
        time = t;
        rate = r;
    }
    float findtotal()
    {
        return principle + findinterest();
    }
};
int main()
{
    float p, t, r, a;
    total ta;
    cout << "Enter the value of p,t,r: ";
    cin >> p >> t >> r;
    ta.setdata(p, t, r);
    a = ta.findtotal();
    cout << "Total Amount=" << a << endl;
    return 0;
}