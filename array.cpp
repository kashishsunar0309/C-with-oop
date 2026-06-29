#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array
    int marks[5] = {10, 20, 30, 40, 50};

    // Print array elements using a loop
    cout << "Marks are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}
