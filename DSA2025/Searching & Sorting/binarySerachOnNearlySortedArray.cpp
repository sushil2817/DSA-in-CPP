#include<iostream>
using namespace std;

int searchNearlySorted(int arr[], int n, int target){
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s <= e){

        if( (mid-1 >= 0) && arr[mid-1] == target){
            return mid-1;
        }
        if(arr[mid] == target){
            return mid;
        }
        if( (mid+1 < n) && arr[mid+1] == target){
            return mid+1;
        }

        // Adjusting the search range
        if(target < arr[mid]){
            e = mid-2; // because mid-1 is already checked
        }else{
            s = mid+2; // because mid+1 is already checked
        }

        mid = s + (e - s) / 2;
    }
    return -1; // Element not found
}
int main(){

    int arr[] = {20};

    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 200;


    int found = searchNearlySorted(arr, n, target);

    if(found == -1){
        
        cout<<"Element not found "<<found<<endl;
    }else{
        cout<<"Element found "<<found<<endl;
    }

return 0;
}