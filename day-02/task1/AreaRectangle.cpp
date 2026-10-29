#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {


//area and parameter of a rectangle
//enter lengh and width
//display area and parameter

auto length=0,width=0;
cout<< "Enter Length: ";
cin>> length;
cout<< "Enter Width: ";
cin>> width;

cout<<"Area is: "<<length*width<<" and Perimeter is: "<<2 * (length*width)<<endl;

return 0;
}


