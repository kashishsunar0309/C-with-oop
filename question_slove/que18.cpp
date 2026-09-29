/*WAP to convert an object of dollar class to object of ruppes class. Assume that dollar class has data member's dol and cent rupees class have data member's rs and paisa*/
#include <iostream>
using namespace std;
class Dollar
{
    double dollar;
    double cent;

public:
    void getdata(double d, double c)
    {
        dollar = d;
        cent = c;
    }
    void display()
    {
        cout << "Dollar = " << dollar << " and Cents = " << cent << endl;
    }
    friend class Rupees;
};
class Rupees
{
    double rs;
    double paisa;

public:
    Rupees(Dollar d)
    {
        double TotalDollar = d.dollar + (d.cent / 100);
        double TotalRs = TotalDollar * 115;
        rs = (int)TotalRs;
        paisa = (TotalRs - rs) * 100;
    }
    void display()
    {
        cout << "Rs = " << rs << " and Paisa = " << paisa << endl;
    }
};
int main()
{
    Dollar d1;
    d1.getdata(55.5, 300);
    d1.display();

    Rupees r1 = d1;
    r1.display();
    return 0;
}