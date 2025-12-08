#include<iostream>

using namespace std;

int main(){

    int arr[1] = {0};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int ans = 0;

    for(int i=0;i<size;i++){

        ans^=arr[i];

    }

    cout<<"This is Ans: "<<ans;

return 0;

}