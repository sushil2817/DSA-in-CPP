#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int inc(int crr[]){

    crr[0] = crr[0]+10;
    cout<<"outside main"<<endl;
    print(crr,2);

}

int main(){

    int arr[] = {5,6};
    int size = 2;
    
    inc(arr);
    
    cout<<"Inside main"<<endl;
    print(arr,size);

return 0;
}