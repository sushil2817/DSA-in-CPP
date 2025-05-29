#include<iostream>
using namespace std;

int findMissingElement(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e){
        int diff = arr[mid]-mid;
        if(diff == 1){
            // right me jao
            s = mid+1;
        }else {
            // ans store
            ans = mid;
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    // home work so this extra conditions did not need.
    if(ans +1 == 0){
        return size+1;
    }
    return ans+1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<size<<endl;
    cout<<"Missing Element is  "<<findMissingElement(arr,size);

return 0;
}