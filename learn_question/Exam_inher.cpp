#include <iostream>
using namespace std;
class Animal
{
public:
    void display()
    {
        cout << "Animal which is my favroite is Dog." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog can bark" << endl;
    }
};
int main()
{
    Dog d;
    d.display();
    d.bark();
    return 0;
}