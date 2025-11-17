#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {1,3,2,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i+=2){
        cout<<i<<endl;
        if((i+1) < n){
            swap(arr[i],arr[i+1]);
        }
    }
    printArr(arr,n);
    
return 0;
}