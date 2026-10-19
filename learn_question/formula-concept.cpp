#include <iostream>
using namespace std;

class Square
{
private:
    double a;
    double b;

public:
    void getdata(double A, double B)
    {
        a = A;
        b = B;
    }
    double Answer()
    { // return double instead of void
        double k, l, m, z;
        k = 2 * a * b;
        l = a * a;
        m = b * b;
        z = l + k + m;
        return z; // return the result
    }
};

int main()
{
    double x, y;
    Square S;
    cout << "Enter the value A and B: ";
    cin >> x >> y;

    S.getdata(x, y); // store values in object

    cout << "a^2+2ab+b^2 = " << S.Answer() << endl;
    return 0;
}
