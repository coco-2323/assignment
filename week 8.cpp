//Name:Lawrence Njeru
//reg no:BCS-05-0066/2025
//Week8 assignment
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

    // Constructor
    BankAccount(string name, int number, double balance)
    {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "Account successfully created" << endl;
    }

    void displayAccount()
    {
        cout << "\nAccount Details" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main()
{
    BankAccount account("John Doe", 12345, 50000);

    account.displayAccount();

    return 0;
}
