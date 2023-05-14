#include "Rental.h"

int main() {
    string movies[MAX];
    vector<string> MovieQueue;
    MovieRentalSystem mrs1("John Doe", "123@gmail.com", movies, 0.07, 0.05, 100.00, 123, 1, 1, 2021);
    cout << mrs1.GetCustomerInfo();
    cout << mrs1.GetSalesData();
    cout << endl;
    cout << noboolalpha;
    int index = 0;
    mrs1.AddMovie("The Matrix", index);
    mrs1.AddMovie("My Matrix", index);
    mrs1.AddMovie("John Wick", index);
    mrs1.RemoveMovie("My Matrix");
    mrs1.PrintMovies();
    mrs1.AddMovieToQueue("The Matrix");
    mrs1.AddMovieToQueue("Test Value");
    mrs1.AddMovieToQueue("John Wick");
    mrs1.RemoveMovieFromQueue();
    mrs1.PrintMovieQueue();
    bool Valid = mrs1.isValid();
    cout << boolalpha;
    cout << "Valid Price?: " << Valid;
    cout << endl;
}