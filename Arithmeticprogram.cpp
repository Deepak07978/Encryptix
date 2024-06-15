// ARITHMETIC OPERATION PROGRAM
#include <iostream>
using namespace std;

int main()
{
    double a, b;

    cout << "ENTER A FIRST NUMBER:" << endl;
    cin >> a;

    cout << "ENTER A SECOND NUMBER :" << endl;
    cin >> b;

    char operation;
    cout << "Enter an arithmetic operation you want to perform between " << a << " and " << b << " is : " << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':

        cout << "The Addition of " << a << " and " << b << " is: " << a + b << endl;

        break;
    case '-':

        cout << "The Subtraction of " << a << " and " << b << " is: " << a - b << endl;

        break;

    case '*':

        cout << "The Multiplication of " << a << " and " << b << " is: " << a * b << endl;

        break;
    case '/':
        if (b != 0)
        {
            cout << "The Division of " << a << " and " << b << " is: " << a / b << endl;
            break;
        }
        else
        {
            cout << "NOT DEFINED ." << endl;
            cout << "PLEASE ENTER A NON ZERO NUMBER ." << endl;
            break;
        }

    case '%':
        if ((int)(a) == a && (int)(b) == b)
        {

            int m, n;
            m = a;
            n = b;

            cout << "The Remainder of " << a << " and " << b << " is:" << m % n << endl;

            break;
        }

        else
        {
            cout << "Enter An Integer Number " << endl;

            break;
        }

    default:
        cout << "Please enter an arithmetic operator" << endl;
    }

    return 0;
} 