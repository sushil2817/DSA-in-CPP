#include<iostream>
using namespace std;
int main(){

    // int a = 5;
    // cout<<a<<endl;
    // cout<<"address of a : "<<&a<<endl;
    // pointer creation
    // int* ptr = &a;
    //accessing value stored at address stored in ptr
    // cout<<"Accessing: "<<*ptr<<endl;
    // cout<<"ptr Accessing: "<<ptr<<endl;
    // cout<<"ptr address: "<<&ptr<<endl;


    // int* ptr = nullptr;
    // cout<<*ptr<<endl;

    int a = 5;
    int* p = &a;
    cout<<&a<<endl;
    cout<<p<<endl;
    p=p+1;

    cout<<p<<endl;
    
    cout<<*p<<endl;

    int arr[5] = {10,20,30,40,50};
    arr = arr+1; // why



return 0;
}