#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    // int left = 0;
    // int right = size-1;
    
    // for(int i=0;i<size;i++){
    //     if(left < right){
    //         swap(arr[left],arr[right]);
    //         left++;
    //         right--;
    //     }
    // }

    for(int left=0,right = size-1;   left<=right;    right--,left++){
        swap(arr[left],arr[right]);
    }

}

void printingArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    reverseArray(arr,size);

    printingArray(arr,size);

return 0;
}