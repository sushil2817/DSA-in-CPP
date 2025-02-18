#include<iostream>
using namespace std;
int main(){

    // array creation
    // int arr[101];
    // char ch[20];
    // bool flags[10];
    // long num[900];
    // short s[1000];

    // cout<<"array created successfully"<<endl;


    int a = 5;
    cout<<"Address of a : "<<&a <<endl;
    cout<<"Size of a "<<sizeof(a)<<endl;

    int arr[100];
    cout<<"Base addres of arr is : "<<&arr<<endl;
    cout<<"Base address of Arr is : "<<arr<<endl;
    cout<<"Size of arr : "<<sizeof(arr)<<endl;



return 0;
}