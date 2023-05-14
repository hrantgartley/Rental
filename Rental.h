#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100;

class MovieRentalSystem {
   private:
    string CustomerName, CustomerEmail, MovieName, MovieGenre, MovieRating;
    double SalesTax, Discount, TotalPrice;
    int OrderNumber, Day, Month, Year, MovieYear, MovieMonth, MovieDay;
    string Movies[MAX];
    vector <string> MovieQueue;

   public:
    MovieRentalSystem();
    MovieRentalSystem(string, string, string*, double, double, double, int, int, int, int);
    ~MovieRentalSystem();
    double CalculateOrderTotal();
    double GetSalesTax() const;
    double GetDiscount() const;
    double GetTotalPrice() const;
    int GetDay() const;
    int GetMonth() const;
    int GetYear() const;
    MovieRentalSystem GetDataFromEndUser();
    string GetDate();
    string GetCustomerInfo();
    string GetSalesData();
    string GetCustomerEmail();
    void SetCustomerName(string);
    void SetCustomerEmail(string);
    void SetSalesTax(double);
    void SetDiscount(double);
    void SetTotalPrice(double);
    void SetOrderNumber(int);
    void SetDay(int);
    void SetMonth(int);
    void SetYear(int);
    void PrintOrderTotal();
    void AddMovie(string, int&);
    void RemoveMovie(string);
    void AddMovieToQueue(string);
    void RemoveMovieFromQueue();
    void PrintMovieQueue();
    void PrintMovies();
    bool isValid();
    friend ostream& operator<<(ostream& os, const MovieRentalSystem& mrs);
    friend istream& operator>>(istream& is, MovieRentalSystem& mrs);
};
