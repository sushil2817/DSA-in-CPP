#include<iostream>
using namespace std;

// right shift
void shiftArrByOne (int arr[], int size){
    // step 1
    int temp = arr[size-1];
    // step 2
    // shift-> arr[i] = arr[i-1]
    for(int i=size-1;i>=1;i--){
        arr[i] = arr[i-1];
    }
    // step 3
    arr[0] = temp;
}

// left shift

void  leftShift(int arr[], int size){
    // step 1
    int temp = arr[size-1];
    // step 2
    // shift-> arr[i] = arr[i-1]
    for(int i=size-1;i>=1;i--){
        arr[i] = arr[i+1];
    }
    // step 3
    arr[0] = temp;
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;

    // shiftArrByOne(arr,size);
    leftShift(arr,size);

    // printing
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}