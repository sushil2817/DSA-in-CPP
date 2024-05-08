#include<vector>
#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums) {

        int i = 1;
        int j = 0;
        // two pointer
         while(i<nums.size()){
            if(nums[i]==nums[j]){
                i++;
            }
            else{
                nums[++j] = nums[i++];
            }
            // else{
            //     j++;
            //     nums[j]= nums[i];
            //     i++;
            //     }
         }
         return j+1;
}

int main(){
  
      int arr[] = {0,0,1,1,1,2,2,3,3,4};

      


    return 0;
}