#include<iostream>
#include<vector>
using namespace std;

void fun(int arr[], int size){
    cout<<"Printing the Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print(vector<int>v){
    int size = v.size();
    for(int i=0;i<size;i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){

    // Vecotr initialization

    vector<int>arr; // default with no data, 0 size
    vector<int>arr2(5,-11); // init with n size with specific data 
    print(arr2);

    // how to copy vector
    vector<int>arr5{1,2,3,4,5};
    vector<int>arr6(arr5);
    print(arr6);




    // Static Memory Allocation
    // int arr1[5] = {1,2,3,4,5};
    // // fun(arr1,5);

    // // Dynamic Memory Allocation
    // int n;
    // cin>>n;
    // int *arr = new int[n]; // each element would be 0, or garbage
    // for(int i=0;i<n;i++){
    //     // int data;
    //     // cin>>data;
    //     cin>>arr[i];
    // }
    // fun(arr,n);

    // Vector didn't tell size of vactor
    // Vector keep inserting , i will managae the allocatons.

    // vector<int>v;

    // while(1){
    //     int d;cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
    // }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // v.pop_back(); 
    // print(v);
    // v.pop_back(); 
    // print(v);
    // v.pop_back(); 
    // print(v);
    // v.pop_back(); 
    // print(v);
    // v.pop_back(); 
    // print(v);
    // v.pop_back(); 
    // print(v);

    // int n;cin>>n;
    // for(int i=0;i<n;i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }
    // print(v);

    // for(int i=0;i<10;i++){
    //     int n;
    //     cin>>n;
    //     v.push_back(n);
    // }


    // I want to clear the vector

    // v.clear();
    // print(v);
    // cout<<"Vector is cleared now"<<endl;
    // v.push_back(50);
    // print(v);
    // cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
return 0;
}