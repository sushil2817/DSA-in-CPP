#include<iostream>
using namespace std;

int findDuplicate (int arr[], int size){
    int ans = 0;
    // xoring all element
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }

    for(int i=1; i<size;i++){
        ans = ans^i;
    }

    return ans;
}

int main(){

    // int arr[] = {4,2,1,3,1};
    int arr[] = {6,3,1,5,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"duplication number is "<<findDuplicate(arr,size)<<endl;

    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}