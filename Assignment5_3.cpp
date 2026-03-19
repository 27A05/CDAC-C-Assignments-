#include <iostream>
using namespace std;

int main() 
{
    int choice;
    float balance = 1000, amount;

    do {
        cout << "\nMenu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) 
        {
            case 1:
                cout << "Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited.\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount > balance) 
                {
                    cout << "Insufficient balance!\n";
                } 
                else 
                {
                    balance -= amount;
                    cout << "Amount withdrawn.\n";
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}