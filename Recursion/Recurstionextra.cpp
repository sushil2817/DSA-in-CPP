#include<iostream>
#include<vector>
using namespace std;

// house rober I & II(198,213)
int solve(vector<int>& nums, int s, int e){
    // base case
    if(s>e){
        return 0;
    }
    // include
       int option1 = nums[s]+solve(nums, s+2, e);
    //    exclude
       int option2 = 0+solve(nums, s+1,e);

       int finalAns = max(option1, option2);
       return finalAns;
}

int deArrangement(int n){
    // base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = (n-1) * (deArrangement(n-1)+deArrangement(n-2));

    return ans;
}


int main(){
   int n=4;
   cout<<deArrangement(n)<<endl;


// 198
// 213 

    return 0;
}