#include <iostream>
using namespace std;
int main()
{
    int i;
    char name[8] = {'E', 'I', 'N', 'S', 'T', 'E', 'I', 'N'};
    for (i = 0; i < 8; i++)
        cout << "Einstein [" << i << " ] = " << name[i] << endl;
    return 0;
}