#include <iostream>

#include <iomanip>

using namespace std;



int main()

{

    const double VAT_RATE = 0.15;

    const double BOOK_PRICE = 18.50;



    const double PEN_PRICE = 7.25;

    const double PENCIL_PRICE = 4.50;



    int books = 0;

    int pens = 0;

    int pencils = 0;



    cout << "SCHOOL STATIONERY COST CALCULATOR" << endl;



    cout << "Enter number of exercise books: ";

    cin >> books;



    cout << "Enter number of pens: ";

    cin >> pens;



    cout << "Enter number of pencils: ";

    cin >> pencils;



    double booksCost = books * BOOK_PRICE;

    double pensCost = pens * PEN_PRICE;

    double pencilsCost = pencils * PENCIL_PRICE;



    double subtotal = booksCost + pensCost + pencilsCost;

    double vatAmount = subtotal * VAT_RATE;

    double total = subtotal + vatAmount;



    cout << fixed << setprecision(2);

    cout << "\n------ STATIONERY RECEIPT ------" << endl;

    cout << "Exercise books (" << books << "): R" << booksCost << endl;

    cout << "Pens (" << pens << "):             R" << pensCost << endl;

    cout << "Pencils (" << pencils << "):       R" << pencilsCost << endl;

    cout << "Subtotal (excl. VAT):             R" << subtotal << endl;

    cout << "VAT (15%):                        R" << vatAmount << endl;

    cout << "Total (incl. VAT):                R" << total << endl;



    return 0;

}
