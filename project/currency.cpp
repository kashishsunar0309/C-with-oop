#include <iostream>
#include <string>
using namespace std;
int main()
{
    string cur;
    double num, usd = 153, euro = 179, ind = 1.6, yen = 0.96, aus = 109;
    cout << "Enter the Currency You Need Please: " << endl;
    cin >> cur;
    cout << "How much Currency You Have?: " << endl;
    cin >> num;
    if (cur == "usd")
    {
        cout << "You will get : " << num / usd;
    }
    else if (cur == "euro")
    {
        cout << "You will get : " << num / euro;
    }
    else if (cur == "ind")
    {
        cout << "You will get : " << num / ind;
    }
    else if (cur == "yen")
    {
        cout << "You will get : " << num / yen;
    }
    else if (cur == "aus")
    {
        cout << "You will get : " << num / aus;
    }
    else
    {
        cout << "Not Available Now !";
    }
    return 0;
}