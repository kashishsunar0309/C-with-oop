/* WAP to read and display 10 objects of  Items class containing data members itme name,code and price */
#include <iostream>
using namespace std;
class Items
{
public:
    string name;
    int code;
    double price;
    void getdata(string n, int c, double p)
    {
        name = n;
        code = c;
        price = p;
    }
    void display()
    {
        cout << "=======Information=======";
        cout << endl
             << "NAME:" << name << endl
             << "CODE_NUMBER:" << code << endl
             << "PRICE:" << price << endl;
    }
};
int main()
{
    Items m0, m1, m2, m3, m4, m5, m6, m7, m8, m9;
    m0.getdata("Kashish", 10, 50000);
    m1.getdata("Bigwan", 1234, 45000);
    m2.getdata("Prakash", 234, 456777);
    m3.getdata("Utsav", 345, 45678);
    m4.getdata("Safahal", 456, 67886);
    m5.getdata("Kripesh", 2, 900000);
    m6.getdata("Dilip", 3, 999999);
    m7.getdata("Ram", 1, 445544);
    m8.getdata("Hari", 5, 55666);
    m9.getdata("Karun", 45, 77766);
    m0.display();
    m1.display();
    m2.display();
    m3.display();
    m4.display();
    m5.display();
    m6.display();
    m7.display();
    m8.display();
    m9.display();
    return 0;
}