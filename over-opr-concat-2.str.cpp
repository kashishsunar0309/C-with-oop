#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *s;
    int l; // length of string
public:
    String()
    { // empty string, never a null pointer
        l = 0;
        s = new char[1];
        s[0] = '\0';
    }

    String(const String &other)
    { // copy constructor
        l = other.l;
        s = new char[l + 1];
        strcpy(s, other.s);
    }

    String &operator=(const String &other)
    { // copy assignment
        if (this != &other)
        {
            delete[] s; // free our old buffer
            l = other.l;
            s = new char[l + 1];
            strcpy(s, other.s);
        }
        return *this;
    }

    ~String()
    {
        delete[] s;
    }

    void getdata()
    {
        char buffer[100];
        cout << "Enter a string:- " << endl;
        cin >> buffer;
        delete[] s; // free the old buffer before reallocating
        l = strlen(buffer);
        s = new char[l + 1];
        strcpy(s, buffer);
    }

    void display()
    {
        cout << s << endl;
    }

    String operator+(const String &x)
    {
        String temp;
        delete[] temp.s; // discard the default buffer
        temp.l = l + x.l;
        temp.s = new char[temp.l + 1];
        strcpy(temp.s, s);
        strcat(temp.s, x.s);
        return temp; // copy constructor now makes a safe copy
    }
};

int main()
{
    String s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3 = s1 + s2;
    cout << "s3:- ";
    s3.display();
    return 0;
}