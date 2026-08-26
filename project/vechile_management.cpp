#include <iostream>
using namespace std;
int main()
{
    int user_input;
    int amount = 0;
    int count = 0;
    while (true)
    {
        cout << endl
             << "===VECHILE===PARKING===MANAGEMENT===SYSTEM===";
        cout << endl
             << "Enter your vechile data: " << endl;
        cout << endl;
        cout << "Press-1: For AutoRickShaw " << endl;
        cout << "Press-2: For Car " << endl;
        cout << "Press-3: For Bus " << endl;
        cout << "Press-4: To Show Record " << endl;
        cout << "Press-5: To Delete Data. " << endl;
        cin >> user_input;
        if (user_input == 1)
        {
            count = count + 1;
            amount = amount + 100;
            cout << "=========================================\n \n ";
        }
        else if (user_input == 2)
        {
            amount = amount + 200;
            count = count + 1;
            cout << "=========================================\n \n ";
        }
        else if (user_input == 3)
        {
            amount = amount + 300;
            count = count + 1;
            cout << "=========================================\n \n ";
        }
        else if (user_input == 4)
        {
            cout << "Total Amount is : << " << amount << endl;
            cout << "Total Number of Vechiles Parked: << " << count << endl;
            cout << "=========================================\n \n ";
        }
        else if (user_input == 5)
        {
            amount = 0;
            count = 0;
            cout << "=========================================\n \n ";
        }
        else
        {
            cout << " INVALID OPTION." << endl;
            cout << "=========================================\n \n ";
        }
    }
    return 0;
}
