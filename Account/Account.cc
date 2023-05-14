#include "Account.h"

Account::Account() {
    FirstName = "";
    LastName = "";
    AccountNumber = 0;
}

Account::Account(string firstName, string lastName, int accountNumber) {
    FirstName = firstName;
    LastName = lastName;
    AccountNumber = accountNumber;
}

Account::Account(string first, string last) {
    FirstName = first;
    LastName = last;
    AccountNumber = GenerateAccountNumber();
}


string Account::DisplayFullName() {
    string FullName = FirstName + " " + LastName;
    return FullName;
}

int Account::GenerateAccountNumber() {
    srand(time(0));
    AccountNumber = rand() % 9999999 + 1;
    return AccountNumber;
}

void Account::ShowAccountInfo() {
    cout << "Account Holder Name: " << DisplayFullName() << endl;
    cout << "Account Number: " << GenerateAccountNumber() << endl;   
}
