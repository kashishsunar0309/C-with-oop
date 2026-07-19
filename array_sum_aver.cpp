#include <iostream>
using namespace std;
int main()
{
    int i, avg, sum = 0;
    int num[5] = {23, 25, 16, 78, 34};
    for (i = 0; i < 5; i++)
    {
        sum = sum + num[i];
        avg = sum / 5;
    }
    cout << "\n Sum of the Elements in the array is :" << sum;
    cout << "\n Average of the elements in the array is :" << avg;
    return 0;
}