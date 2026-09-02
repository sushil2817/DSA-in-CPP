#include <iostream>
#include <vector>

using namespace std;

void findElement(int arr[][4],int rows,int cols,int target){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(target == arr[i][j]){
                cout<<"fount at "<<arr[i][j]<<endl;
            }
        }
    }
}

int main() {

 int arr[5][4] = {{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,6,8},{1,9,9,6}};

    findElement(arr,5,4,9);

    return 0;
}