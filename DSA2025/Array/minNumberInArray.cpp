#include<iostream>
#include<limits.h>
using namespace std;

int findMinimunInArray(int arr[],int size){

    // ans store variable
    int minAns = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){

    // cout<<(INT_MIN)<<endl; -2^31
    // cout<<(INT_MAX)<<endl;   (2^32)-1

    int arr[] = {10,8,31,4,3,-2,51};
    int size = 7;

    int minimun =  findMinimunInArray(arr,size);
    cout<<"Minimum number is: "<<minimun<<endl;


return 0;
} 