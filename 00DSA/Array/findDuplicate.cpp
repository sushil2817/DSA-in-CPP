#include<iostream>
using namespace std;
int main(){

    int arr[5] = {3,1,0,0,2};

    int size = sizeof(arr)/sizeof(arr[0]);
    
    int ans = 0;

    for(int i=0;i<size;i++){

        ans = ans^arr[i];
    
    }
    for(int i=1;i<size;i++){
    
        ans = ans^i;
    
    }
    
    cout<<"Duplicate element is : "<<ans<<endl;

return 0;
}