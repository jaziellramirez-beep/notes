

#include <iostream>
#include <iomanip>
#include "BankAccount.h"
using namespace std;

// Default constructor
BankAccount::BankAccount() //declare
{
    name = "";
    accountNumber = "";
    balance = 0.0;
}

// Getter functions
string BankAccount::getName() const
{
    return name;
}

string BankAccount::getAccountNumber() const
{
    return accountNumber;
}

double BankAccount::getBalance() const
{
    return balance;
}




// Setter functions
void BankAccount::setName(string newName)
{
    name = newName;
}

void BankAccount::setAccountNumber(string newNumber)
{
    accountNumber = newNumber;
}

// Deposit money
void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;

        cout << fixed << setprecision(2);
        cout << "Deposit successful!" << endl;
        cout << "New balance: $" << balance << endl;
    }
    else
    {
        cout << "Invalid deposit amount." << endl;
    }
}

// Withdraw money
void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;

        cout << fixed << setprecision(2);
        cout << "Withdrawal successful!" << endl;
        cout << "New balance: $" << balance << endl;
    }
    else
    {
        cout << "Invalid amount or insufficient funds." << endl;
    }
}

// Display account information
void BankAccount::display() const
{
    cout << fixed << setprecision(2);

    cout << "\n========== ACCOUNT INFORMATION ==========" << endl;
    cout << "Account Holder: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: $" << balance << endl;
    cout << "=======================================" << endl;
}

