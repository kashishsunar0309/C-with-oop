#include <iostream>
#include <string>
using namespace std;
struct employee
{
    int Id;
    string name;
} e1;
int main()
{
    e1.Id = 35;
    e1.name = "Rashid";
    cout << "Id : " << e1.Id << endl;
    cout << "Name : " << e1.name;
    return 0;
}