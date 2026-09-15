#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array of 5 integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Pointer 'p' points to the first element of the array (arr[0])
    int *p = arr; // arr is the base address of the array

    // *(p + 1) means: go one step forward from p (arr[1]) and print its value
    cout << *(p + 1) << endl; // Output: 20

    // *p++ means: print the value at p (arr[0]) then move pointer to next element
    cout << *p++ << endl; // Output: 10, then p points to arr[1]

    // *++p means: first move pointer forward, then print the value
    cout << *++p << endl; // p moves to arr[2], Output: 30

    // *--p means: move pointer backward, then print the value
    cout << *--p << endl; // p goes back to arr[1], Output: 20

    // Example of pointer difference
    int *start = &arr[1]; // address of arr[1]
    int *end = &arr[4];   // address of arr[4]

    // Subtracting two pointers gives the number of elements between them
    int diff = end - start; // (index 4 - index 1) = 3
    cout << "Difference between end and start: " << diff << endl;

    return 0;
}
