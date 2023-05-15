#include "Address.h"

Address::Address() {
    this->State = "";
    this->City = "";
    this->County = "";
    this->StreetAddress = "";
    this->ZipCode = 0;
}

Address::Address(string state, string city, string county, string streetAddress, int zipCode) {
    State = state;
    City = city;
    County = county;
    StreetAddress = streetAddress;
    ZipCode = zipCode;
}

void Address::PrintFullAddress() const{
    cout << "City: " <<City << endl;
    cout << "State: " << State << endl;
    cout << "County: "<< County << endl;
    cout << "Street address: " <<StreetAddress << endl;
    cout << "ZIP: " << ZipCode << endl;
}

int main() {
    Address a("Alabama", "Sylacauga", "T", "179 Autumn Acres Ln", 35150);
    a.PrintFullAddress();
    return 0;
}