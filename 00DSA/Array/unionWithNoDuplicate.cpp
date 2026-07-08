#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[] = {1,2,4,6,8,10};
    int brr[] = {3,4,5,6};

    int sizea = 6;
    int sizeb = 4;

    vector<int> ans;

    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){  // {1,2,4,6,8,10,3,5};
            if(arr[i] == brr[j] ){
                brr[j] = -1;
            }
        }
    }

    for(auto value:arr){
        ans.push_back(value);
    }
    for(auto value:brr){
        if(value != -1){
            ans.push_back(value);
        }
    }

    for(auto value:ans){
        cout<<value<<" "; 
    }


return 0;
}