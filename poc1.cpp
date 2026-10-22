#include <iostream>
using namespace std;
class test
{
private:
    int kg;
    int gram;

public:
    void data(int k, int g)
    {
        kg = k;
        gram = g;
    }
    void calculation(test t1, test t2)
    {
        gram = t1.gram + t2.gram;
        kg = t1.kg + t2.kg;
        kg = kg + gram / 1000;
        gram = gram % 1000;
    }
    void display()
    {
        cout << kg << "Kg" << "." << gram << "Gram" << endl;
    }
};
int main()
{
    test t1, t2, t3;
    t1.data(34, 1500);
    t2.data(16, 250);
    t1.display();
    t2.display();
    t3.calculation(t1, t2);
    t3.display();
    return 0;
}