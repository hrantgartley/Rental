#include "Address.h"
#include <iostream>
using namespace std;

int main() {
    Address a;
    cout << "------------------------------------------\n";
    cout << "ADDRESS\n";
    cout << "------------------------------------------\n";
    a.SetInfo("Alabama", "Sylacauga", "Talladega", "179 Autumn Acres Ln", 35150);
    cout << a.ReturnShortenedAddress();
    cout << std::endl;
    cout << "------------------------------------------\n";
    return 0;
}
