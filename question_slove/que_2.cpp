/*convert the following while loop into for loop.
int i = 10;
while (i < 20) {
    cout << i;
    (i++)++;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    for (i = 10; i < 20; i++)
    {
        cout << i << endl;
    }
    return 0;
}