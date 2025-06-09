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
int main(){

    int arr[] = {10,20,40,40,50,60,70,80,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 80;

    int ansIndex = foundFirstOcc(arr,size,target);

    cout<<"First Occ: "<<ansIndex;

return 0;
} 