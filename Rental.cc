/*
 Grant Hartley
 8 May 2023
 Implementation of the Rental class
 Description: This implementation file contains the definitions of the functions declared in Rental.h to manipulate the data members of the class. 
*/

#include "Rental.h"

MovieRentalSystem::MovieRentalSystem() {
    CustomerName = "";
    CustomerEmail = "";
    SalesTax = 0.0;
    Discount = 0.0;
    TotalPrice = 0.0;
    OrderNumber = 0;
    Day = 0;
    Month = 0;
    Year = 0;
}

MovieRentalSystem::MovieRentalSystem(string customerName,
                                     string customerEmail,
                                     string* movies,
                                     double salesTax,
                                     double discount,
                                     double totalPrice,
                                     int orderNumber,
                                     int day,
                                     int month,
                                     int year) {
    CustomerName = customerName;
    CustomerEmail = customerEmail;
    SalesTax = salesTax;
    Discount = discount;
    TotalPrice = totalPrice;
    OrderNumber = orderNumber;
    Day = day;
    Month = month;
    Year = year;
    for (int i = 0; i < MAX; i++) {
        Movies[i] = movies[i];
    }
}

MovieRentalSystem::~MovieRentalSystem() {
    cout << "Memory Deallocated" << endl;
}

double MovieRentalSystem::CalculateOrderTotal() {
    double Total{};
    Total = TotalPrice + (TotalPrice * SalesTax) - (TotalPrice * Discount);
    ostringstream oss;
    oss << fixed << setprecision(2) << Total;
    double formattedTotal = stod(oss.str());
    return formattedTotal;
}

ostream& operator<<(ostream& os, const MovieRentalSystem& mrs) {
    cout << "  MOVIE SYSTEM INVOICE" << endl;
    cout << "------------------------" << endl;
    os << "Customer Name: " << mrs.CustomerName << endl;
    os << "Customer Email: " << mrs.CustomerEmail << endl;
    os << "Sales Tax: " << mrs.SalesTax << endl;
    os << "Discount: " << mrs.Discount << endl;
    os << "Total Price: " << mrs.TotalPrice << endl;
    os << "Order Number: " << mrs.OrderNumber << endl;
    os << "Date: " << mrs.Year << "/" << mrs.Day << "/" << mrs.Month << endl;
    return os;
}

istream& operator>>(istream& is, MovieRentalSystem& mrs) {
    cout << "Enter you name: ";
    getline(is, mrs.CustomerName);
    cout << "Enter your email: ";
    is >> mrs.CustomerEmail;
    cout << "Enter the sales tax: ";
    is >> mrs.SalesTax;
    cout << "Enter the discount: ";
    is >> mrs.Discount;
    cout << "Enter the total price: ";
    is >> mrs.TotalPrice;
    cout << "Enter the order number: ";
    is >> mrs.OrderNumber;
    cout << "Enter the day: ";
    is >> mrs.Day;
    cout << "Enter the month: ";
    is >> mrs.Month;
    cout << "Enter the year: ";
    is >> mrs.Year;
    cout << endl;
    return is;
}

MovieRentalSystem MovieRentalSystem::GetDataFromEndUser() {
    MovieRentalSystem mrs;
    cin >> mrs;
    return mrs;
}

string MovieRentalSystem::GetDate() {
    string s;
    s = to_string(Year) + "/" + to_string(Month) + "/" + to_string(Day);
    return s;
}

string MovieRentalSystem::GetCustomerInfo() {
    string s;
    s = CustomerName + "\n" + CustomerEmail;
    cout << "Customer INFO" << endl;
    cout << "------------------------" << endl;
    return s;
}

string MovieRentalSystem::GetSalesData() {
    ostringstream ss;
    ss << fixed << showpoint << setprecision(2);
    ss << "Sales Tax: " << SalesTax << "\n"
       << "Discount: " << Discount << "\n"
       << "Total Price: $" << CalculateOrderTotal();
    cout << endl;
    cout << endl;
    cout << "Sales DATA" << endl;
    cout << "------------------------" << endl;
    return ss.str();
}

string MovieRentalSystem::GetCustomerEmail() {
    return CustomerEmail;
}

void MovieRentalSystem::PrintOrderTotal() {
    cout << endl;
    cout << "------------------------" << endl;
    cout << "Total: $" << CalculateOrderTotal() << endl;
    cout << endl;
    cout << endl;
}

void MovieRentalSystem::SetCustomerName(string Name) {
    CustomerName = Name;
}

void MovieRentalSystem::SetCustomerEmail(string Email) {
    CustomerEmail = Email;
}

void MovieRentalSystem::SetSalesTax(double salesTax) {
    SalesTax = salesTax;
}

void MovieRentalSystem::SetDiscount(double discount) {
    Discount = discount;
}

void MovieRentalSystem::SetTotalPrice(double totalPrice) {
    TotalPrice = totalPrice;
}

void MovieRentalSystem::SetOrderNumber(int orderNumber) {
    OrderNumber = orderNumber;
}

void MovieRentalSystem::SetDay(int day) {
    Day = day;
}

void MovieRentalSystem::SetMonth(int month) {
    Month = month;
}

void MovieRentalSystem::SetYear(int year) {
    Year = year;
}

double MovieRentalSystem::GetSalesTax() const {
    return SalesTax;
}

double MovieRentalSystem::GetDiscount() const {
    return Discount;
}
double MovieRentalSystem::GetTotalPrice() const {
    return TotalPrice;
}

int MovieRentalSystem::GetMonth() const {
    return Month;
}

int MovieRentalSystem::GetDay() const {
    return Day;
}

int MovieRentalSystem::GetYear() const {
    return Year;
}

bool MovieRentalSystem::isValid() {
    bool Valid = true;
    if (CalculateOrderTotal() < 0)
        Valid = false;
    return Valid;
}

void MovieRentalSystem::AddMovie(string movie, int& index) {
    Movies[index] = movie;
    index++;
}

void MovieRentalSystem::RemoveMovie(string movie) {
    for (int i = 0; i < MAX; i++) {
        if (Movies[i] == movie) {
            Movies[i] = "";
        }
    }
}

void MovieRentalSystem::PrintMovies() {
    cout << endl;
    cout << "Movies" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < MAX; i++) {
        if (Movies[i] != "") {
            cout << Movies[i] << endl;
        }
    }
    cout << endl;
    cout << endl;
}

void MovieRentalSystem::AddMovieToQueue(string movie) {
    MovieQueue.push_back(movie);
}

void MovieRentalSystem::RemoveMovieFromQueue() {
    if (!MovieQueue.empty()) {
        MovieQueue.erase(MovieQueue.begin());
    }
}

void MovieRentalSystem::PrintMovieQueue() {
    cout << endl;
    cout << "Movie Queue" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < MovieQueue.size(); i++) {
        cout << MovieQueue[i] << endl;
    }
    cout << endl;
    cout << endl;
}
