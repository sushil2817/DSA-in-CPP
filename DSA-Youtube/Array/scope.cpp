#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<endl<<"Inisde the function"<<endl;

    arr[0] = 120;
    // printing the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sumArr(int arr[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }

    cout<<"Value of sum is: "<<sum<<endl;
}

int main(){

    int arr[3] = {1,2,3};
    sumArr(arr,3);
    update(arr,3);
    sumArr(arr,3);

    cout<<"printing in main funcition"<<endl;
    // printing arr
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


return 0;
}