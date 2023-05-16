#include <cstdlib>
#include <ctime>
#include <iostream>

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
    void SetAccountInfo(string, string, int);
};
