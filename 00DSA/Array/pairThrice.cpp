#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[] = {10,30,50,70,20,40,60};

    for(int i=0;i<7;i++){
        int element1 = arr[i];
        for(int j=i+1;j<7;j++){
            int element2 = arr[j];
            for(int k=j+1;k<7;k++){
                // cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                if(arr[i]+arr[j]+arr[k] == 110){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
    



return 0;
}