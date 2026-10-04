#include <iostream>
using namespace std;
class Total
{
    // nested of member functions for access
private:
    float principle, rate, time;
    float Find_interest()
    {
        return principle * rate * time / 100;
    }
    // nested of member functions for access
public:
    void data()
    {
        cout << "Enter the value of principle,rate,time: ";
        cin >> principle >> rate >> time;
    }
    void show()
    {
        cout << "Principle: " << principle << endl;
        cout << "Rate: " << rate << endl;
        cout << "Time: " << time << endl;
    }
    float findtotal();
};
// Defining member functin of the class.
float Total::findtotal()
{
    return principle + Find_interest();
}
int main()
{
    Total t;
    t.data();
    t.show();
    cout << "Total with interest: " << endl;
    cout << t.findtotal();
    return 0;
}