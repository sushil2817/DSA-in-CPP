#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

 class SOLUTION{

   public:
      vector<int> twoPointerMethod(vector<int>& arr, int k, int x){
        int l=0, h = arr.size()-1;
     while(h-l >= k){
        if(x-arr[l]>arr[h]-x){
            l++;
        }
        else{
            h--;
        }
     }
     vector<int>ans;
     for(int i=l;i<=h;i++){
        ans.push_back(arr[i]);
     }
      return ans;
     }
 }

int main(){



    return 0;
}