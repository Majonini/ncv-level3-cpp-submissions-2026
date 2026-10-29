#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Your functions from Part 2
int calcSum(int num1, int num2) {
    return num1 + num2;
}
int calcDeference(int num1, int num2) {
    return num1 - num2;
}
int calcProduct(int num1, int num2) {
    return num1 * num2;
}
int calcQoutient(int num1, int num2) {
    if (num2 == 0) return 0; // Guard against crash if random num2 is 0 (though range is 1-50)
    return num1 / num2;
}

int main() {
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate 2 random numbers in the range of 1 to 50
    int n1 = (rand() % 50) + 1;
    int n2 = (rand() % 50) + 1;

     // Get input from user
    cout << "Type a number: ";
    cin >> n1;
    cout << "Type a number: ";
    cin >> n2;

    // Call function and print the result
    int total = calcSum(n1, n2);
    cout << "The sum is: " << total << endl;
     int Deference = calcDeference(n1, n2);
    cout << "The Deference is: " << Deference << endl;
     int Product = calcProduct(n1, n2);
    cout << "The Product is: " << total << endl;
     int Qoutient = calcQoutient(n1, n2);
    cout << "The Qoutient is: " << Qoutient << endl;

    char op;
    cout << "Generated random numbers: " << n1 << " and " << n2 << endl;
    cout << "Enter a valid maths operator (+, -, *, /): ";
    cin >> op;

    int result = 0;
    bool validOperator = true;

    // Switch statement to determine the correct function to call
    switch (op) {
        case '+':
            result = calcSum(n1, n2);
            break;
        case '-':
            result = calcDeference(n1, n2);
            break;
        case '*':
            result = calcProduct(n1, n2);
            break;
        case '/':
            result = calcQoutient(n1, n2);
            break;
        default:
            validOperator = false;
            cout << "Error: Invalid math operation entered!" << endl;
            break;
    }

    // Display the result only if a valid operation was performed
    if (validOperator) {
        cout << "The result of " << n1 << " " << op << " " << n2 << " is: " << result << endl;
    }

    return 0;
}
