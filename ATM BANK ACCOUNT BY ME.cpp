/*ATM BANK ACCOUNT BY ME*/
#include <iostream>
using namespace std;

double balance = 1000;
int deposit = 0;
int withdraw = 0;
int password = 1234;
int choice = 0;

// show is a function to show or to display the menu of ATM
void show()
{
    cout << "Menu" << endl;
    cout << "1: Balance" << endl;
    cout << "2: Withdraw" << endl;
    cout << "3: Deposit" << endl;
    cout << "4: Exit" << endl;
    cout << "*******************" << endl;
}

void process()
{

    cout << "Enter your password: ";
    cin >> password;

    if (password == 1234)
    {
        cout << "Enter your choice: ";
        cin >> choice;
    }
    else
    {
        char option = 'o';
        cout << "Your password is incorrect. Enter 'y' to change it or 'n' to continue: ";
        cin >> option;
        if (option == 'y' || option == 'Y')
        {
            cout << "Enter your new password: ";
            cin >> password;
        }
        else
        {
            choice = 4;
        }
    }

    do
    {
        switch (choice)
        {

        case 1:
            cout << "Your balance is: " << balance << endl;
            break;

        case 2:
            cout << "NOTE: Your balance is " << balance << endl;
            cout << "Enter the amount to withdraw: ";
            cin >> withdraw;

            if (withdraw > balance)
            {
                cout << "Insufficient balance." << endl;
            }
            else
            {
                balance -= withdraw;
                cout << "Your balance now is: " << balance << endl;
            }
            break;

        case 3:
            cout << "Your current balance is: " << balance << endl;
            cout << "Enter the deposit amount: ";
            cin >> deposit;
            balance += deposit;
            cout << "Your balance is now: " << balance << endl;
            break;

        case 4:
            cout << "Thank you for using our ATM." << endl;
            break;
        }

    } while (choice != 4);
}

int main()
{
    show();
    process();

    return 0;
}
