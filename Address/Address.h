#include <iostream>
using namespace std;

class Address {
   private:
    string State;
    string City;
    string County;
    string StreetAddress;
    int ZipCode;

   public:
    Address();
    Address(string, string, string, string, int);
    void PrintFullAddress() const;
};
