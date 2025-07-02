#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int minIndex = i; // ith element hi smalles element hai 
        for(int j=i+1;j<n;j++){ 
            if(v[j]<v[minIndex]){ // < for decresing order
                minIndex = j;
            }
        }
        // swap ith and min index
        swap(v[i],v[minIndex]);
    }

}

void print(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v = {44,33,55,22,11};

    selectionSort(v);

    print(v);


return 0;
}