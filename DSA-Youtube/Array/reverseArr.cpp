#include<iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void altSwap(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void swap(int one, int two){
    int temp = one;
    one = two;
    two = temp;
}

void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<endl<<"before reverse"<<endl;
    printArr(arr,10);
    altSwap(arr,10);
    cout<<endl<<"After reverse"<<endl;
    printArr(arr,10);

return 0;
}