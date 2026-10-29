#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {

char gCode ;
cout<< "Enter Gender Code (f/m): ";
cin>> gCode;
switch (gCode){
case 'f':
    cout << "You are a Female";
    break;
case    'F':
    cout << "You are a Female";
    break;
 case   'm':
    cout << "You are a Male";
    break;
case    'M':
    cout << "You are a Male";
    break;
default:
    cout << "You not Either";
}


return 0;
}
