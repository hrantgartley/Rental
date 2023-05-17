#include "Address.h"
#include <iostream>
using namespace std;

int main() {
    Address a;
    cout << "------------------------------------------\n";
    cout << "ADDRESS\n";
    cout << "------------------------------------------\n";
    a.SetInfo("Alabama", "Vincent", "Ta", "179 ", 35178);
    cout << a.ReturnShortenedAddress();
    cout << std::endl;
    cout << "------------------------------------------\n";
    return 0;
}
