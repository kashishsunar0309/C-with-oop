#include <iostream>
using namespace std;
int square();
int main()
{
    int answer;
    answer = square();
    cout << "The square of the entered number is: " << answer;
    return 0;
}
int square()
{
    int x;
    cout << "Enter any number: ";
    cin >> x;
    return x * x;
}