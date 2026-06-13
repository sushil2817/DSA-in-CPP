#include<iostream>
#include <climits>
using namespace std;


void maxNumber(int arr[],int size){
    int maxNumber = INT_MIN;
    for(int i=0;i<size;i++){
        if( arr[i] > maxNumber){
            maxNumber = arr[i];
        }
    }
    cout<<"This is Max Number "<<maxNumber<<endl;
}
void minNumber(int arr[],int size){
    int maxNumber = INT_MAX;
    for(int i=0;i<size;i++){
        if( arr[i] < maxNumber){
            maxNumber = arr[i];
        }
    }
    cout<<"This is Min Number "<<maxNumber<<endl;
}


int main(){
    int arr[] = {1,19,-1700,6,8,9,100,101,124};
    int size = sizeof(arr)/sizeof(arr[0]);
    maxNumber(arr,size);
    minNumber(arr,size);
return 0;
}