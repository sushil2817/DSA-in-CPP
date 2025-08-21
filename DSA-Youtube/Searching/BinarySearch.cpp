#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }else if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){  

    int even[8] = {2,4,6,8,10,12,14,18};
    cout<<binarySearch(even,8,18)<<endl;
    int odd[5] = {3,8,11,14,16};
    cout<<binarySearch(odd,5,11)<<endl;

return 0;
} 