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


    // int a = 5;
    // cout<<"Address of a : "<<&a <<endl;
    // cout<<"Size of a "<<sizeof(a)<<endl;

    // int arr[100];
    // cout<<"Base addres of arr is : "<<&arr<<endl;
    // cout<<"Base address of Arr is : "<<arr<<endl;
    // cout<<"Size of arr : "<<sizeof(arr)<<endl;

    // int arr[] = {2,3,4,5,6};
    // int brr[5] = {1,2,3,4,5};
    // int crr[5] = {2,3,};
    // // int drr[5] = {1,2,3,4,5,6,7,8}; to many initializers

    // int arr1[5] = {5,6,7,8,9};

    // int n=5;
    // // for(int i=0;i<n;i++){
    // //     cout<<arr1[i];
    // // }

    // int arr2[5];

    // int b =5;

    // for(int i=0;i<b;i++){
    //     cout<<"Enter the value for index "<<i<<": ";
    //     cin>>arr2[i];
    // }

    // cout<<"Printing the array "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr2[i]<<" ";
    // }

    // int arr[10];

    // int n =10;

    // for(int i=0;i<n;i++){
    //     cout<<"Enter the value for index "<<i<<": ";
    //     cin>>arr[i];
    // }

    // cout<<"Printing the array"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl<<"Double the array"<<endl;

    // for(int i=0;i<n;i++){
    //     arr[i] = arr[i]*2;
    // }

    // cout<<"Prinitng the doubled array"<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }



    // int arr[5];

    // int n=5;

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    // }
    // cout<<"Printing the sum ";
    // cout<<sum;

    int arr[5] = {2,3,4,5,10};
    int target = 15;
    int n = 5;
    bool flag = 0;

    // 0->target not found
    // 1-> target found
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            // cout<<"target found"<<endl;
            flag = 1;
            break;
        }
    }

    if(flag ==1){
        cout<<"target found";
    }else{
        cout<<"target not found";
    }

return 0;
}