#include<iostream>
using namespace std;

int foundFirstOcc(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target){
            // ans store 
            ans = mid;
            // left me jao
            e = mid-1;
        }else if(target > arr[mid]){
            // right me jao
            s = mid + 1;
        }else if(target < arr[mid]){
            // left me jao
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }else if(target > arr[mid]){
            s = mid+1;
        }else if(target < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int totalOccurence(int arr[], int size, int target){
    int firstOcc = foundFirstOcc(arr,size,target);
    int lastOcc = lastOccurence(arr,size,target);

    int total =  lastOcc - firstOcc +1;
    return total;
}

int main(){

    int arr[] = {10,20,30,40,50,60,70,80,80,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 80;

    // int ansIndex = lastOccurence(arr,size,target);
    // cout<<"Last Occurence: "<<ansIndex;

    int totalOcc = totalOccurence(arr,size,target);

    cout<<"Total Occ: "<<totalOcc<<endl;
return 0;
}