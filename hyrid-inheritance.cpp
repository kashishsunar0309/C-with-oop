#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal
{
public:
    void breathe()
    {
        cout << "Mammal is breathing air" << endl;
    }
};

class Bird : public Animal
{
public:
    void fly()
    {
        cout << "Bird is flying" << endl;
    }
};

// Hybrid: Bat inherits from Mammal and Bird
class Bat : public Mammal, public Bird
{
public:
    void echolocate()
    {
        cout << "Bat is using echolocation" << endl;
    }
};

int main()
{
    Bat b;
    b.eat();        // Inherited from Animal (via Mammal and via Bird)
    b.breathe();    // From Mammal
    b.fly();        // From Bird
    b.echolocate(); // Bat's own method
    return 0;
}