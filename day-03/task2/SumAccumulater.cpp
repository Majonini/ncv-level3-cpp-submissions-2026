#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {
int sum,num,i;
double avg;

for (i = 5; i >= 1; i--){
        cout<< "Enter Number "<<i<<": ";
        cin>> num;
        sum=num+i;
        avg=num/5;
   // cout << "Number is: " <<i<<endl;
}
cout << "Sum is = " << sum<<endl;
cout << "Avarage is = " << avg;


return 0;
}
