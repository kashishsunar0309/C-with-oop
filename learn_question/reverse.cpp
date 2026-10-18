#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    } while (num > 0);
    cout << "Reverse=" << rev << endl;
    return 0;
}
/*Start: num = 672, rev = 0

Step 1: rem = 2, rev = 2, num = 67

Step 2: rem = 7, rev = 27, num = 6

Step 3: rem = 6, rev = 276, num = 0

Loop ends → Output: 276
*/