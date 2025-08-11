#include<iostream>
using namespace std;

bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(key == arr[i])
        return true;
    }
    return false;
}
int main(){

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,2};
    
    int isFound = search(arr,10,10);

    if(isFound){
        cout<<"Element is found in Array"<<endl;
    }else{
        cout<<"Element is not found in Array"<<endl;
    }
    



return 0;
}