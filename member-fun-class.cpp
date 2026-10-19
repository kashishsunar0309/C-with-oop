#include <iostream>
using namespace std;
class Items
{
public:
    void display()
    {
        cout << "Here is the list: " << endl;
    }
    void fruit();
    void vegetable();
    void junk_food();
};
void Items::fruit()
{
    cout << "------Fruit: " << endl;
    cout << "banana" << endl
         << "Apple" << endl;
}
void Items::vegetable()
{
    cout << "++++++++++Vegetable: " << endl;
    cout << "potato" << endl
         << "tomato" << endl;
}
void Items::junk_food()
{
    cout << "=========Junk_food: " << endl;
    cout << "burger" << endl
         << "pizza" << endl;
}
int main()
{
    Items i;
    i.display();
    i.fruit();
    i.vegetable();
    i.junk_food();
    return 0;
}