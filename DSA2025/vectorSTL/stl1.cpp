#include<iostream>
using namespace std;

void fun(int arr[], int size){
    cout<<"Printing the Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // Static Memory Allocation
    int arr1[5] = {1,2,3,4,5};
    // fun(arr1,5);

    // Dynamic Memory Allocation
    int n;
    cin>>n;
    int *arr = new int[n]; // each element would be 0, or garbage
    for(int i=0;i<n;i++){
        // int data;
        // cin>>data;
        cin>>arr[i];
    }
    fun(arr,n);

return 0;
}