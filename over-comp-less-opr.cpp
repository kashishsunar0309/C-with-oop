// Overloading comparision less than operator.
#include <iostream>
using namespace std;
class Time
{
    int hr;
    int min;

public:
    void getdata()
    {
        cout << "Enter hour and minutes:-" << endl;
        cin >> hr >> min;
    }
    int operator<(Time t)
    {
        int ft, st;         // First time and Second Time.
        ft = hr * 60 + min; // Convert into minutes
        st = t.hr * 60 + t.min;
        if (ft < st)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t1, t2;
    t1.getdata();
    t2.getdata();
    if (t1 < t2)
        cout << "t1 is less than t2" << endl;
    else
        cout << "t1 is greater or equal to t2" << endl;
    return 0;
}