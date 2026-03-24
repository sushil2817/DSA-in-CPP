#include<iostream>
using namespace std;
int main(){
    // int age;
    // cout<<"Enter your age: "<<endl;
    // cin>>age;
    // cout<<"Your age is: "<<age<<endl;
    
int age;
string name;
cout << "Enter your age: ";
cin >> age;
cin.ignore(); // Discard the newline character left by cin >> age
cout << "Enter your name: ";
getline(cin, name);
return 0;
}

// cin.ignore();
// cin.fail();
// getline(cin,name);