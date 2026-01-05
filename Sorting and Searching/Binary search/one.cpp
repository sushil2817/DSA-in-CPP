#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[6] = {3,8,11,14,16};

    int ans1 = binarySearch(even,6,1);
    int ans2= binarySearch(odd,5,20);

    cout<<ans1<<endl;
    cout<<ans2<<endl;
return 0;
}