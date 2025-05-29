#include<iostream>
using namespace std;


int peakIndexInMountainArray(int arr[], int n) {
        // int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s < e){
            if(arr[mid] < arr[mid+1]){
                // a wali line me hu
                // peak right me exist krti h
                s = mid+1;
            }else{
                // yaa too main B line pr hu
                // ya toh main Peak element pr hu
                e = mid;
            }
            // mid update
            mid = s+(e-s)/2;
        }
        return arr[s];
}


int main(){

    int arr[] = {10,20,50,40,30};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<peakIndexInMountainArray(arr,size);


return 0;
}