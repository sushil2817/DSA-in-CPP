#include <iostream>
#include <vector>

using namespace std;

void printRowWiseSum(int arr[][4],int rows, int col){
    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}
void printcolWiseSum(int arr[][4],int rows, int col){
    for(int i=0;i<col;i++){
        int sum = 0;
        for(int j=0;j<rows;j++){
            sum = sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}

int main() {

    int arr[5][4] = {{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,6,8},{1,9,9,6}};

    printRowWiseSum(arr,5,4);

    return 0;
}