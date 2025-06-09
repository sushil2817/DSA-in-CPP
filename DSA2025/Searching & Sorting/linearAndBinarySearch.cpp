#include<iostream>
using namespace std;


int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;

    // there is some flow in below lin, hw?
    // int mid = (start+end)/2;
    while(start <= end){
        // found
        int mid = (start+end)/2;

        if(arr[mid] == target){
            // return index of found element
            return mid;
        
        }else if(target > arr[mid]){
            // right mer jao
            start = mid+1;
        }else if(target < arr[mid]){
            // left me jao
            end = mid-1;
        }

        // mid update
        // mid = (start+end)/2;
         
    }
    // agar yha tk phuche ho matlb element nahi mila
    return -1;
}
int main(){
    // time complexity
    // k = log(n) base 2

    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 90;

    int ansIndex = binarySearch(arr,size,target);
    
    if(ansIndex == -1){
        cout << "Element not found" << endl;
    }else{
        cout << "Element found at index: " << ansIndex << endl;
    }

return 0;
}