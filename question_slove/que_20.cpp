/*WAP to create class Student having the data members name and roll number and necessary member functions. Again create another class Marks having data member's oop,pm,bc,acc,fin and also add necessary functions.Derive the class Result from student and marks having its own datamembers total and percentage and member functions for calculating and display ing the data members. Finally create an object of Result class and then read and display its record.*/
#include <iostream>
using namespace std;
class Students
{
public:
    string name;
    int roll_number;
    void getdata(string n, int r)
    {
        name = n;
        roll_number = r;
    }
};
class Marks
{
public:
    int oop, pm, bc, acc, fin, add;
    void getdata(int o, int p, int b, int a, int f, int ad)
    {
        oop = o;
        pm = p;
        bc = b;
        acc = a;
        fin = f;
        add = ad;
    }
};
class Result : public Students, public Marks
{
public:
    int total;
    double percentage;
    void calculate()
    {
        total = oop + pm + bc + acc + fin;
        percentage = (total / 500.0) * 100;
    }
    void display()
    {
        cout << "\n========Student Result========\n";
        cout << "\tName: " << name << endl;
        cout << "\tRoll Number: " << roll_number << endl;
        cout << "\tOOP: " << oop << ", PM:" << pm << "\n\tBC: " << bc << ", ACC: " << acc << "\n\tFIN: " << fin << endl;
        cout << "\tTotal : " << total << endl;
        cout << "\tPercentage: " << percentage << endl;
    }
};
int main()
{
    Result r;
    r.Students::getdata("Rahul Sharma", 12);
    r.Marks::getdata(89, 98, 98, 96, 94, 90);
    r.calculate();
    r.display();
    return 0;
}