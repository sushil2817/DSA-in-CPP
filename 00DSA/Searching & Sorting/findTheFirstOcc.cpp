#include <iostream>
#include <vector>

using namespace std;

int findFirstOcc(vector<int>v, int target){

    int start = 0;
    int end = v.size();
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(target == v[mid]){
            ans = mid;
            end = mid-1;
        }
        if(target < v[mid]){
            end = mid-1;
        }
        if(target > v[mid]){
            start = mid+1;
        }
    }
    return ans;
}

int main() {

    vector<int>v{1,2,4,4,4,4,4,5,5,5,6,7,9};

    int found = findFirstOcc(v,5);
    if(found == -1){
        cout<<"Target is not found"<<endl;
    }else{
        cout<<"Target is found at "<<found<<endl;
    }

    return 0;
}