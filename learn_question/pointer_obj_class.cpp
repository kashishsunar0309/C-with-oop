#include <iostream>
using namespace std;
class Item
{
    int code, price;

public:
    void getdata()
    {
        cout << "Enter the value of code and price: " << endl;
        cin >> code >> price;
    }
    void show()
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Item *a = new Item();
    Item b;
    a->getdata();
    b.getdata();
    cout << "-------ITEM--------" << endl;
    cout << "First: " << endl;
    a->show();
    cout << endl;
    cout << "Second: " << endl;
    b.show();
    return 0;
}