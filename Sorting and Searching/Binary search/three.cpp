#include<iostream>
using namespace std;

int foundPeakElement(int arr[], int size){
    int s = 0, e = size-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}
int main(){
    int arr[] = {3,4,5,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"lenght of array "<<size<<endl;
    int ans = foundPeakElement(arr,size);
    cout<<"Peak Element is "<<ans<<endl;
    return 0;
}