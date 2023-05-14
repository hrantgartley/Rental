#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Account {
   private:
    string FirstName;
    string LastName;
    int AccountNumber;

   public:
    Account();
    Account(string, string, int);
    Account(string, string);
    string DisplayFullName();
    int GenerateAccountNumber();
    void ShowAccountInfo();

};