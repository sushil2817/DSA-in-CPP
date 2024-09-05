#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int robHelper(vector<int>& nums, int i){
        // base case
        if(i >= nums.size()){
            return 0;
        }

        // sol for 1 case
        int robAmt1 = nums[i] + robHelper(nums,i+2);
        int robAmt2 = 0 + robHelper(nums,i+1);

        return max(robAmt1, robAmt2);
    }
// time complexity O(2^n)
// space complexity O(n) 
    int rob(vector<int>& nums) {
        return robHelper(nums,0);
    }
};
int main(){



return 0;
}