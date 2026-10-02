/* What will be the output of following code?
Class one{
    public:
    one(){
            cout << "Creating clas ONE";
}
};
class two:one{
    public:
    two(){
            cout << "Creating class TWO.";
}
};*/
// SOLUTION:
#include <iostream>
using namespace std;
class one
{
public:
    one()
    {
        cout << "Creating class ONE." << endl;
    }
};
class two : one
{
public:
    two()
    {
        cout << "Creating class Two. " << endl;
    }
};

int main()
{
    two t;
    return 0;
}

// THE OUTPUT :
// Creating class ONE.
// Creating class Two.