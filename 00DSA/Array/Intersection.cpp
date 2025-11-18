#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){

    vector<int> ans;
    int arr1[4] = {1,2,3,4};
    int arr2[2] = {3,4};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    for(int i=0;i<n;i++){
            int element = arr1[i];

            for(int j=0;j<m;j++){
                if(element == arr2[j]){
                    ans.push_back(element);
                    arr2[j] = -1;
                    break;
                }
            }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}