#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "The Vechile is perfect for me." << endl;
    }
};
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "The Car is Flexable in Market for car lover." << endl;
    }
};
int main()
{
    Car obj;
    return 0;
}