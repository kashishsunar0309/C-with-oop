#include <iostream>
using namespace std;
int main()
{
    char i;
    char body[4] = {'b', 'o', 'd', 'y'};
    for (i = 0; i < 4; i++)
    {
        cout << "\n body[" << body[i] << "] = " << body[i] << endl;
    }
    return 0;
}