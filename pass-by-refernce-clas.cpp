#include <iostream>
using namespace std;
class weight
{
private:
    int kg;
    int gram;

public:
    void getdata(int k, int g)
    {
        kg = k;
        gram = g;
    }
    void addittion(weight &w1, weight &w2)
    {
        kg = w1.kg + w2.kg;
        gram = w1.gram + w2.gram;
        kg = kg + gram / 1000;
        gram = gram % 1000;
    }
    void display()
    {
        cout << kg << "Kg" << "." << gram << "g" << endl;
    }
};
int main()
{
    weight w1, w2, w3;
    w1.getdata(15, 600);
    w1.display();
    w2.getdata(35, 700);
    w2.display();
    w3.addittion(w1, w2);
    w3.display();
    return 0;
}