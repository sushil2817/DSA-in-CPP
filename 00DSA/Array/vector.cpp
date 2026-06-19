#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr;
    
    // cout<<sizeof(arr)/sizeof(int)<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    
    arr.push_back(5);
    arr.push_back(6);
    
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    
    vector<int>brr(10,29);
    
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<endl;
    }

    vector<int>crr{1,2,3};


return 0;
}