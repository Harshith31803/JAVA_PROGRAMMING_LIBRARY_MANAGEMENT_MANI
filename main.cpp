#include <iostream>
#include "BigInteger.h"

using namespace std;

int main()
{
    BigInteger num1, num2, result;
    int choice;

    do
    {
        cout << "\n========== BigInteger Calculator ==========\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Compare Numbers\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter First Number: ";
            num1.input();

            cout << "Enter Second Number: ";
            num2.input();

            result = num1 + num2;

            cout << "Result = ";
            result.display();
            cout << endl;
            break;

        case 2:
            cout << "\nEnter First Number: ";
            num1.input();

            cout << "Enter Second Number: ";
            num2.input();

            result = num1 - num2;

            cout << "Result = ";
            result.display();
            cout << endl;
            break;

        case 3:
            cout << "\nEnter First Number: ";
            num1.input();

            cout << "Enter Second Number: ";
            num2.input();

            result = num1 * num2;

            cout << "Result = ";
            result.display();
            cout << endl;
            break;

        case 4:
            cout << "\nEnter First Number: ";
            num1.input();

            cout << "Enter Second Number: ";
            num2.input();

            if (num1 == num2)
                cout << "Both numbers are Equal\n";
            else if (num1 > num2)
                cout << "First Number is Greater\n";
            else
                cout << "Second Number is Greater\n";

            break;

        case 5:
            cout << "\nThank you for using BigInteger Calculator.\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}