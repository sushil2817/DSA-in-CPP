#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std; 

int sortingMethod(vector<int> & nums){

           sort(nums.begin(), nums.end());
           for( int i=0;i<nums.size();i++){
               if(i== nums[i]) continue;
               else 
               return i;
           }
           return nums.size();
}

int xorr(vector<int>& nums){
      int ans = 0;
        // xor all value of array
        for(int i=0;i<nums.size();i++){
             ans ^= nums[i];
        }
        // xor all range item [0,n]
        int n = nums.size();
        for(int i=0;i<=n;i++){
              ans ^= i;
        }

        return ans;
}

// T.C = > O(nlog(n))
// S.C = > O(1);
int main(){
// 268
     
     vector<int>nums;
     nums.push_back(9);
     nums.push_back(6);
     nums.push_back(4);
     nums.push_back(2);
     nums.push_back(3);
     nums.push_back(5);
     nums.push_back(7);
     nums.push_back(0);
     nums.push_back(1);
    
     cout<<sortingMethod(nums);
     cout<<endl;
     cout<<xorr(nums);

    return 0;
}