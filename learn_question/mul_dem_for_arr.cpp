#include <iostream>
using namespace std;
int main()
{
    /*Value change
    string letters[3][3] = {
    {"A","B","C"},
    {"D","E","F"},
    {"G","H","I"}
};
    letters[0][0] = "Z";
    cout << letters[0][0];*/

    // Using loop multidemensional method.
    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }
}