#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> factorial(int N){
     // code here
        
        vector<int>ans;
        ans.push_back(1);
        int carry = 0;
        
        for(int i=2;i<=N;i++){
            for(int j=0;j<ans.size();j++){
                int x = ans[j]*i+carry;
                ans[j] = x%10;
                carry = x/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry /=10;
            }
            // carry = 0;
        }
        
        // for(int e: ans){
        //     cout<<e<<" ";
        // }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }

 int main(){


// GFG
// Factorials of large numbers
// Add two numbers represented by two arrays (for reference)



    return 0;
 }
