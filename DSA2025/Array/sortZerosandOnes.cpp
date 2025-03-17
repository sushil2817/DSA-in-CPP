#include<iostream>
using namespace std;


void sortZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;
    //  step A: Count 0 and 1
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    // step B: place all zeros and ones
    int i;
    for(i=0;i<zeroCount;i++){
        arr[i]=0;
    }

    for(int j=i;j<size;j++){
        arr[j] = 1;
    }

}

int main(){

    int arr[] = {0,1,0,0,1,0,1,0,1,1,1,1,0,0,0,0,};
    int size = 16;

    sortZeroOne(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}