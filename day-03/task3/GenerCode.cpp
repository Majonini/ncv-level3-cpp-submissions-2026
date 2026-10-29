#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {


char gCode ;
cout<< "Enter Gender Code (f/m): ";
cin>> gCode;

if (gCode == 'f'||gCode == 'F'){
    cout << "You are a Beutiful Woman" << endl;
}else if (gCode == 'm'||gCode == 'M'){
cout << "You are a Good Man" << endl;
}else{
cout << "You are a Either!" << endl;
}


return 0;
}
