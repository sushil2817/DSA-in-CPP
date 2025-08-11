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

void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<endl<<"before reverse"<<endl;
    printArr(arr,10);
    reverseArr(arr,10);
    cout<<endl<<"After reverse"<<endl;
    printArr(arr,10);

return 0;
}