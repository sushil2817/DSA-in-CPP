#include<iostream>
#include<vector>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0;
    int e =  n-1;
    int mid = s+(e-s)/2;

    while(s<e){



        mid = s+(e-s)/2;
    }
}class Solution {
public:

int bruteForceM2PrefixSum(vector<int>& nums){
    vector<int>lsum(nums.size(),0);
    vector<int>rsum(nums.size(),0);
    // cal lsum array
    for(int i=1;i<nums.size();i++){
        lsum[i] = lsum[i-1]+nums[i-1];
    }
    // cal rsum array
    for( int i = nums.size()-2;i>=0;i--){
        rsum[i] = rsum[i+1]+nums[i+1]; 
    }
    // check krte hai

    for(int i=0;i<nums.size();i++){
        if(lsum[i] == rsum[i]) return i;
    }
     return -1; 
}

    int pivotIndex(vector<int>& nums) {
         return bruteForceM2PrefixSum(nums);
    }
};




int main(){

    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(arr[0]); 


return 0;
} 