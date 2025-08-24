#include<iostream>
#include<string>
using namespace std;
int main(){

    string favTea = "Black Tea";
    string description = "Known as \"best\" tea";

    // cout<<favTea<<endl<<description<<endl;

    string userTea;
    int teaQuantity;

    cout<<"What would you like to order in tea? "<<endl;
    getline(cin,userTea);

    cout<<"How many cups of "<<userTea<<" would you like to have? "<<endl;
    cin>>teaQuantity;


    cout<<teaQuantity<<endl;
    cout<<userTea;


return 0;
}