#include<iostream>
using namespace std;

void findMissing(int a[],int n){
        //  visited method

        for(int i=0;i<n;i++){
            int index = abs(a[i]);
            if(a[index-1]>0){
                a[index-1] *= -1;
            }
        }

        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        for(int i=0;i<n;i++){
            if(a[i]>0)
            cout<<i+1<<" ";
        }
}

void newAPP(int a[],int n){
    int i=0;
    while(i<n){
         int index = a[i]-1;
         if(a[i] != a[index]){
            swap(a[i],a[index]);
         }else{
            i++;
         }
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
       for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            cout<<i+1<<" ";
        }
       }
}

int main(){
     int n;
     int arr[] = {1,3,5,3,4};
     n = sizeof(arr)/sizeof(int);
    //  findMissing(arr,n);
    newAPP(arr,n);


    return 0;
}