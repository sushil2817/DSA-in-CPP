#include<algorithm>
#include<set>
#include<iostream>
#include<vector>
using namespace std;


// Two Pointers Approach
int twoPointersKDiff(vector<int>& a,int k){
    sort(a.begin(), a.end());
    int i=0,j=1;
    set<pair<int,int>> ans;
    while(j<a.size()){
        int diff = a[j]-a[i];
        if(diff==k){
            ans.insert({a[i],a[j]});
            ++i,++j;
        }else if(diff > k){
            i++;
        }else{
            j++;
        }
        if(i==j){
          j++;
        }
  

     return ans.size();
}

int bs(vector<int>&a, int start,int x){
    int end = nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid] == x){
            return mid;
            }
            else if(x>a[mid]){
                start = mid+1;
            }else{
                end = mid-1;
            }
    }
    return -1;
}
// with binary search Approach
int findPair(vector<int>&a, int k){
    sort(a.begin(), a.end());
    set <pair<int,int>>ans;

    for(int i=0;i<a.size();i++){
            if(bs(a, i+1,a[i]+k) != -1){
                ans.insert({a[i],a[i]+k});
            }
    }
    return ans.size();
}


// brute force
int kDiffPair( vector<int>&arr,int k){
     int count = 0;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
          if(abs(arr[i]-arr[j])==k){
            count++;
          }
     }
  }
  return count; 
}
int main(){
    vector<int> arr = {3,1,4,1,5};
    int k = 2;
    int ans = kDiffPair(arr,k);
    cout<<ans<<endl;


    int ans2 = twoPointersKDiff(arr,k);

    cout<<ans2<<endl;
      
    return 0;
}