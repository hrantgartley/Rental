#include <iostream>
#pragma once
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
    string ReturnShortenedAddress() const;
    void PrintFullAddress() const;
    void SetInfo(string, string, string, string, int);
};
