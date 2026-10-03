#include <iostream>
using namespace std;
struct currency
{
    int rs;
    float paisa;
};
int main()
{
    currency c1, c3;
    currency c2 = {150, 45.76};
    cout << "Enter the Rs: ";
    cin >> c1.rs;
    cout << endl;
    cout << "Enter the paisa: ";
    cin >> c1.paisa;
    cout << endl;
    c3.paisa = c1.paisa + c2.paisa;
    if (c3.paisa >= 100.0)
    {
        c3.paisa -= 100.0;
        c3.rs++; // This increment is lost
    }
    c3.rs = c1.rs + c2.rs;
    cout << "Rs:" << c1.rs << " Paisa: " << c1.paisa << endl;
    cout << "Rs:" << c2.rs << " Paisa: " << c2.paisa << endl;
    cout << "+------------------------------------" << endl;
    cout << "Rs:" << c3.rs << " Paisa: " << c3.paisa;
    return 0;
}