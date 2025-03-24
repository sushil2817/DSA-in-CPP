#include<iostream>
using namespace std;

void print2dArray(int arr[][3], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void colWisePrint(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // create a 2D array
    // int arr[3][3];
    int arr[3][4] = { {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                };
    int crr[][4] = { {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                };
    // Number of column dena bhut jrurt hai
    // print-2dArr
    int row = 3;
    int col = 4;
    // print2dArray(arr,row,col);
    // colWisePrint(arr,row,col);
    // input
    int arr1[3][3];
    int row1 = 3;
    int col1 = 3;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<"Enter this input for row index: "<<i<<" column index: "<<j<<endl;
            cin>>arr1[i][j];
        }
    };
    print2dArray(arr1,row1,col1);
return 0;
}  