#include<iostream>
using namespace std;





// brute force approach
int findDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}


// new approach(improved approach)
int newAPP(int nums[]){
    while(nums[0] != nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
       }
       return nums[0];
}
int main(){
    int arr[] = {3,1,3,4,2};
     int n = 5;

    //  cout<<findDuplicate(arr,n);
     cout<<newAPP(arr);


    return 0;
}