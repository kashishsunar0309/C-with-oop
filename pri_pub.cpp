#include <iostream>
using namespace std;
class sampleobj
{
private:
    int data;

public:
    void getdata(int d)
    {
        data = d;
    }
    void showdata()
    {
        cout << "Data = " << data << endl;
    }
};
int main()
{
    sampleobj s1, s2;
    s1.getdata(1024);
    s2.getdata(2024);
    s1.showdata();
    s2.showdata();
    return 0;
}