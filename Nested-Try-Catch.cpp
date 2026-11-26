#include <iostream>
using namespace std;

int main()
{
    double Operand1, Operand2, Result;
    char opr;

    try
    {
        cout << "To proceed, enter\n";
        cout << "First Number: ";
        cin >> Operand1;
        cout << "An Operator: ";
        cin >> opr;
        cout << "Second Number: ";
        cin >> Operand2;

        if (opr != '+' && opr != '-' && opr != '*' && opr != '/')
        {
            throw opr;
        }

        switch (opr)
        {
        case '+':
            Result = Operand1 + Operand2;
            cout << "\n"
                 << Operand1 << " + " << Operand2 << " = " << Result;
            break;

        case '-':
            Result = Operand1 - Operand2;
            cout << "\n"
                 << Operand1 << " - " << Operand2 << " = " << Result;
            break;

        case '*':
            Result = Operand1 * Operand2;
            cout << "\n"
                 << Operand1 << " * " << Operand2 << " = " << Result;
            break;

        case '/':
            try
            {
                if (Operand2 == 0)
                {
                    throw "Division by 0 not allowed";
                }
                Result = Operand1 / Operand2;
                cout << "\n"
                     << Operand1 << " / " << Operand2 << " = " << Result;
            }
            catch (const char *Str)
            {
                cout << "\nBad Operation: " << Str;
            }
            break;
        }
    }
    catch (char n)
    {
        cout << "\nOperation Error: " << n << " is not a valid operator";
    }

    cout << "\n\n";
    return 0;
}