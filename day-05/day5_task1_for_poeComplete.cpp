#include <iostream>
#include <string>
#include <iomanip> // Needed for formatting price decimals (R249.99)

using namespace std;

class Product
{
private:
    // All four data members are private
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    // Public Default Constructor
    Product();

    // Public Setter Methods (with validation guards)
    void setProductCode(string code);
    void setProductName(string name);
    void setPrice(double pr);
    void setQuantityInStock(int qty);

    // Public Getter Methods
    string getProductCode();
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

// Default constructor initializing all 4 attributes to sensible defaults
Product::Product()
{
    productCode = "None";
    productName = "Unknown Product";
    price = 0.0;
    quantityInStock = 0;
}

// Setters with validation
void Product::setProductCode(string code)
{
    if (!code.empty()) {
        productCode = code;
    } else {
        productCode = "None";
    }
}

void Product::setProductName(string name)
{
    if (!name.empty()) {
        productName = name;
    } else {
        productName = "Unknown Product";
    }
}

void Product::setPrice(double pr)
{
    if (pr >= 0.0) {
        price = pr;
    } else {
        price = 0.0; // Guard against negative price
    }
}

void Product::setQuantityInStock(int qty)
{
    if (qty >= 0) {
        quantityInStock = qty;
    } else {
        quantityInStock = 0; // Guard against negative quantity
    }
}

// Getters returning current values
string Product::getProductCode() { return productCode; }
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }


int main()
{
    // Set output format to always display 2 decimal places for money/currency
    cout << fixed << setprecision(2);

    // ==========================================
    // TEST SET 1: Matching the example output
    // ==========================================

    // 1. Create a Product object using the default constructor
    Product product1;

    // 2. Use setter methods to assign values
    product1.setProductCode("P101");
    product1.setProductName("Wireless Mouse");
    product1.setPrice(249.99);
    product1.setQuantityInStock(15);

    // 3. Use getter methods to display the information
    cout << "--- Product 1 Information ---\n";
    cout << "Product Code: " << product1.getProductCode() << endl;
    cout << "Product Name: " << product1.getProductName() << endl;
    cout << "Price: R" << product1.getPrice() << endl;
    cout << "Quantity in Stock: " << product1.getQuantityInStock() << endl;
    cout << "-----------------------------\n\n";


    // ==========================================
    // TEST SET 2: Testing with a different set of data
    // ==========================================

    // 1. Create a second Product object using the default constructor
    Product product2;

    // 2. Use setter methods to assign values
    product2.setProductCode("P102");
    product2.setProductName("Mechanical Keyboard");
    product2.setPrice(899.50);
    product2.setQuantityInStock(8);

    // 3. Use getter methods to display the information
    cout << "--- Product 2 Information ---\n";
    cout << "Product Code: " << product2.getProductCode() << endl;
    cout << "Product Name: " << product2.getProductName() << endl;
    cout << "Price: R" << product2.getPrice() << endl;
    cout << "Quantity in Stock: " << product2.getQuantityInStock() << endl;
    cout << "-----------------------------\n";

    return 0;
}
