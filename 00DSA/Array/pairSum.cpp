#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};
    int sum = 5;
    vector<vector<int>>ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"this is n: "<<n<<endl;
    cout<<"this is size: "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == sum){
                // vector<int>temp;
                // temp.push_back(min(arr[i],arr[j]));
                // temp.push_back(max(arr[i],arr[j]));'

                ans.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});

            }
        }
    }
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){

        cout<<ans[i][0]<<" "<<ans[i][1]<<" ";
        
    }

return 0;
}