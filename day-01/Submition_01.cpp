//Made witth blo
#include <iostream>
#include <string>

using namespace std;

int main(){


string name = "";
string gender = "";

cout<< "What is your Name?"<<endl;
getline(cin>>ws,name);
cout<< "What is your Gender?"<<endl;
getline(cin>>ws,gender);
cout<<"Hello, " <<name<<endl;
if (gender == "M"||gender == "m"){
   cout<< "You are a cleva Bro"<<endl;
}
if(gender == "F"||gender == "f"){
    cout<< "You are a cleva Maddam"<<endl;
}
return 0;

}

