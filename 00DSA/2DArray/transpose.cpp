#include <iostream>
#include <vector>

using namespace std;

void transposeMatrix(int arr[][3],int size){
    cout<<"before transpose"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int newArr[3][4];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            // swap(arr[i][j],arr[j][i]);
            newArr[j][i] = arr[i][j];
        }
    }

    cout<<"After transpose"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<newArr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    transposeMatrix(arr,3);
    return 0;
}