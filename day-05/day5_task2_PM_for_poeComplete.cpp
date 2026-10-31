#include <iostream>
#include <string>

using namespace std;


class Product {
public:
    string name;
    double price;
    int id;
};

// =================================================================
// 1. GetProductData Function
// =================================================================
void GetProductData(Product &p) {
    cout << "\n--- Enter Product Details ---" << endl;
    cout << "Enter Product Name: ";
    cin.ignore(); // Clears any leftover newline characters in the buffer
    getline(cin, p.name);

    cout << "Enter Product Price: ";
    cin >> p.price;

    cout << "Enter Product ID: ";
    cin >> p.id;
}

// =================================================================
// 2. DisplayProduct Function
// =================================================================
void DisplayProduct(const Product &p) {
    cout << "\n--- Product Information ---" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: R" << p.price << endl;
    cout << "ID: " << p.id << endl;
}

// =================================================================
// 3. prodCompare Function
// =================================================================
void prodCompare(const Product &p1, const Product &p2) {
    cout << "\n--- Comparing Products ---" << endl;

    // Check if either name is empty to avoid crashing when accessing index [0]
    if (p1.name.empty() || p2.name.empty()) {
        cout << "Error: One or both product names are empty." << endl;
        return;
    }

    // Compare the very first character (index 0) of both strings
    if (p1.name[0] == p2.name[0]) {
        cout << "Success: Both product names ('" << p1.name << "' and '" << p2.name
             << "') start with the same character '" << p1.name[0] << "'." << endl;
    } else {
        cout << "Notice: The product names do not start with the same character." << endl;
    }
}

// =================================================================
// Example Usage inside main()
// =================================================================
int main() {
    Product prod1;
    Product prod2;

    // Populate data for both products
    GetProductData(prod1);
    GetProductData(prod2);

    // Display data for both products
    DisplayProduct(prod1);
    DisplayProduct(prod2);

    // Compare them
    prodCompare(prod1, prod2);

    return 0;
}
