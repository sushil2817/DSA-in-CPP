#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][4],int row,int col){
    int maxAns = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[][4],int row,int col){
    int minAns = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < minAns){
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

int main(){

    int arr[3][4] = { {1,2,3,4},
                    {5,6,101,8},
                    {9,0,90,12}
                };
    int col = 4;
    int row = 3;
        
    cout<<"Find Max number in 2d Array "<<findMax(arr,row,col)<<endl;
    cout<<"Find Min number in 2d Array "<<findMin(arr,row,col)<<endl;


return 0;
}