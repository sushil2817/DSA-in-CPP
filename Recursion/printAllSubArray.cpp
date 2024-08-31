#include<iostream>
#include<vector>
using namespace std;

void printSubArr_util(vector<int> &nums, int start, int end){    
    // base case
    if(end == nums.size()){
        return;
    }
    // ek case me solve krunga
        for(int i = start; i<=end;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    // recursion call
    printSubArr_util(nums,start,end+1);
}

void printSubArr(vector<int>&nums){
    for(int start = 0; start<nums.size();start++){
        int end = start;
        printSubArr_util(nums,start,end);
    }
}

int main(){
    vector<int>arr{1,2,3,4,5};
    printSubArr(arr);
return 0;
} 