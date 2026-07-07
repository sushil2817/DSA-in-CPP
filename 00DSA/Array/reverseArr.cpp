#include<iostream>
using namespace std;

void printArr(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

void reverseArr(int arr[],int size){

    int start = 0;
    int end = size-1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    
    }
    printArr(arr,size);

}


int main(){

    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,size);

return 0;

}