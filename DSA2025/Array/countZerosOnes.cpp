#include<iostream>
using namespace std;

void countZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            zeroCount++;
        }else{
            oneCount++;
        }
    }
    cout<<"Zero Count: "<<zeroCount<<endl;
    cout<<"One Count: "<<oneCount<<endl;
}

int main(){
    int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1,1,0};
    int size = 17;
    countZeroOne(arr,size);
return 0;
}