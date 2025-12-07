#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[6] = {1,2,2,2,3,4};
    int arr1[4] = {2,2,3,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr1)/sizeof(arr1[0]);

    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(arr[i]<arr1[j]){
            i++;
        }
        else if(arr[i]==arr1[j]){
            ans.push_back(arr[i]);
            i++,j++;
        }else if(arr[i]>arr1[j]){
            j++;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}