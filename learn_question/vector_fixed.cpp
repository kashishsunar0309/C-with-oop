#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // fixed method doesn't run that why comment.
    // fixed method of array which isn't changable.
    /* string car[3] = {"Volvo", "BMW", "Ford"};
    cars[3] = "Tesla";*/

    vector<string> fruits = {"apple", "banana", "pineapple"};
    fruits.push_back("Watermelon");
    for (int i = 0; i <= 4; i++)
    {
        cout << fruits[i] << endl;
    }
    return 0;
}