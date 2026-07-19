#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    // &arr[0] = 104;
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<size<<endl;

    // cout<<&arr[0]<<endl<<&arr<<endl<<arr<<endl;
    
    for(int i=0;i<size;i++){
        cout<<endl;
        cout<<"Arrary "<<i<<" Element Address "<<&arr[i]<<endl;
        cout<<"Arrary "<<i<<" Element "<<arr[i]<<endl;

    }

    // cout<<<<endl;

    return 0;
}