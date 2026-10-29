#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void calcSum(int num1, int num2);
void calcDeference(int num1, int num2);
void calcProduct(int num1, int num2);
void calcQoutient(int num1, int num2);

int main()
{
    auto n1 = 0, n2 = 0;
    cout << "Type a number: ";
    cin >> n1;
    cout << "Type a number: ";
    cin >> n2;
    calcSum(n1, n2);  //function call with arguments(actual values)
    calcDeference(n1, n2);  //function call with arguments(actual values)
    calcProduct(n1, n2);  //function call with arguments(actual values)
    calcQoutient(n1, n2);  //function call with arguments(actual values)
}

void calcSum(int num1, int num2) //function head, parameters(containers)
{
    cout <<"Sum is = " << num1 + num2<<endl;
}

void calcDeference(int num1, int num2) //function head, parameters(containers)
{
    cout <<"Deference is = " << num1 - num2<<endl;
}
void calcProduct(int num1, int num2) //function head, parameters(containers)
{
    cout <<"Product is = " << num1 * num2<<endl;
}

void calcQoutient(int num1, int num2) //function head, parameters(containers)
{
    cout <<"Qoutient is = " << num1 / num2<<endl;
}


