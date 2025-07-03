#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&v){
    int n = v.size();
    // i=0 chod dete hai
    for(int i=1;i<n;i++){
        int key = v[i];
        int j=i-1;
        // move element of arr[0...i-1] that are the greater thean 
        // key to one posiition ahead of their current position
        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j + 1] = key; // inseetion
    }
}

int main(){
    vector<int>v = {5,4,3,2,1};

    insertionSort(v);


return 0;
}