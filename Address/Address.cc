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

void Address::PrintFullAddress() const {
    cout << "City: " << City << endl;
    cout << "State: " << State << endl;
    cout << "County: " << County << endl;
    cout << "Street address: " << StreetAddress << endl;
    cout << "ZIP: " << ZipCode << endl;
}

string Address::ReturnShortenedAddress() const {
    string ShortAddress = City + ", " + State + ", " + to_string(ZipCode);
    return "Brief Address: " + ShortAddress;
}

void Address::SetInfo(string state, string city, string county, string streetAddress, int zipCode) {
    State = state;
    City = city;
    County = county;
    StreetAddress = streetAddress;
    ZipCode = zipCode;
}