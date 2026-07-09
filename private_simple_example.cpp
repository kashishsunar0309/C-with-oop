#include <iostream>
using namespace std;

class detail
{
private:
    string name;
    string address;

public:
    void setname(string n, string a)
    {
        name = n;
        address = a;
    }

    string getname()
    {
        return name;
    }

    string getaddress()
    {
        return address;
    }

    void display()
    {
        cout << "Name: " << name << ", Address: " << address << endl;
    }
};

int main()
{
    detail s1;
    s1.setname("Kashish", "Simalghari");
    s1.display();
    return 0;
}
