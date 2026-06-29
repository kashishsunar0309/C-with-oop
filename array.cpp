#include <iostream>
using namespace std;

// Function to print array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl; // print each element
    }
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50}; // array declaration
    int size = 5;

    // Passing array to function (call by passing reference)
    printArray(numbers, size);

    return 0; // must be inside main
}
