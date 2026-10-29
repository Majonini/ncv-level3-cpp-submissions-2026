#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Constant size for the array
const int SIZE = 5;

// 1. Function to populate an array with 5 values
void populateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// 2. Function to determine and return the number of even numbers
int countEvenNumbers(const int arr[], int size) {
    int evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}

// 3. Function to display only odd numbers inside the array
void displayOddNumbers(const int arr[], int size) {
    cout << "Odd numbers in the array: ";
    bool foundOdd = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            foundOdd = true;
        }
    }
    if (!foundOdd) {
        cout << "None";
    }
    cout << endl;
}

// 4. Function to sort all values in ascending order (using Bubble Sort)
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 5. Function to display sorted values stored inside the array
void displaySortedArray(const int arr[], int size) {
    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int marks[SIZE];

    // Call Hierarchy executed sequentially
    cout << "--- Populating Array ---\n";
    populateArray(marks, SIZE);

    cout << "\n--- Array Analysis ---\n";
    int evens = countEvenNumbers(marks, SIZE);
    cout << "Total number of even numbers: " << evens << endl;

    cout << "\n--- Odd Numbers ---\n";
    displayOddNumbers(marks, SIZE);

    cout << "\n--- Sorting Array ---\n";
    sortArray(marks, SIZE);
    displaySortedArray(marks, SIZE);

    return 0;
}

