#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> arr, int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();

    cout<<n<<endl;
    bubbleSort(arr, n);



return 0;
}