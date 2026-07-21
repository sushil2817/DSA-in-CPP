#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[] = {1,3,5,7,2,4,6};

    // for(int i=0;i<7;i++){
    //     int element = arr[i];

    //     for(int j=i+1;j<7;j++){
    //         // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //         if(element + arr[j] == 9){
    //             cout<<"fount pair "<<"("<<element<<","<<arr[j]<<")"<<endl;
    //         }
    //     }
    // }
    
    for(int i=0;i<9;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]+arr[j]==9){
                    cout<<"found all pair "<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }



return 0;
}