#include<iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        int sum = 0;
            for(int j=0;j<col;j++){
                sum = sum+arr[i][j];
            }
            cout<<"Printing sum "<<sum<<endl;
        }
}

// col sum

void colSum(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
            sum = sum+arr[j][i];
        }
        cout<<"Printing sum "<< sum<<endl;
    }
}

void diagonalSum(int arr[][3], int col, int row){
    for(int i=0;i<row;i++){
        int sum = 0;
        sum = sum+arr[i][i];
        cout<<"Printing sum "<<sum;
    }
}

int main(){

    int arr[3][4] = { {1,2,3,4},
    {5,6,101,8},
    {9,0,90,12}
    };
    int col = 4;
    int row = 3;

    rowSum(arr,row,col);
    colSum(arr,row,col);


return 0;
}