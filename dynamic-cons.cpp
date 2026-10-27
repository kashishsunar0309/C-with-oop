// Dynamic Constructors
// This program demonstrates dynamic memory allocation in a class.
// Memory for the string is allocated at runtime with new and released with delete[].

#include <iostream>
#include <cstring> // for strlen, strcpy, strcat
using namespace std;

class String
{
    char *name; // pointer to a heap-allocated character array
    int length; // number of characters in the string (excluding '\0')

public:
    // Default constructor
    // Creates an empty string. Allocates just enough memory for the '\0' terminator.
    String()
    {
        length = 0;
        name = new char[1]; // allocate 1 byte at runtime
        name[0] = '\0';     // mark the string as empty
    }

    // Parameterized (dynamic) constructor
    // Allocates memory whose size depends on the length of the input string.
    String(char *s)
    {
        length = strlen(s);          // find the length of the input
        name = new char[length + 1]; // allocate length + 1 bytes (room for '\0')
        strcpy(name, s);             // copy the input into the new memory
    }

    // Displays the stored string
    void display()
    {
        cout << "\n Name:-" << name;
    }

    // Joins two String objects with a space between them and stores the result in this object
    void join(String &a, String &b)
    {
        delete[] name; // free the old memory before reallocating

        length = a.length + b.length + 1; // +1 for the space between the two names
        name = new char[length + 1];      // allocate a new block large enough for the result

        strcpy(name, a.name); // copy the first name
        strcat(name, " ");    // add a space
        strcat(name, b.name); // append the second name
    }

    // Destructor
    // Runs automatically when the object goes out of scope and frees its memory.
    ~String()
    {
        delete[] name;
    }
};

int main()
{
    String fn("Aayan"); // uses the parameterized constructor
    String ln("Yadav"); // uses the parameterized constructor
    String n;           // uses the default constructor

    n.join(fn, ln); // n now holds "Aayan Yadav" in newly allocated memory
    n.display();    // print the result

    return 0; // destructors free the memory of fn, ln, and n
}