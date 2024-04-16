// by reference me string glt out put deti h


#include<iostream>
using namespace std;


void printPermutation(string &str, int index){
    // base case
     if(index >= str.length()){
        cout<<str<<" ";
        return;
     }
    //  execute
    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        // recurstive call
        printPermutation(str,index+1);
        // backtracking
        swap(str[index],str[j]);
    }

}

void printAllPath(int maxr[][4], int row, int col, int srcx, int srcy,string  &output){

    //    base case
    // destination coordinates are[row-1], [col-1];

    if(srcx == row-1 && srcy == col-1 ){
        cout<<output<<endl;
        return;
    }
    //  execute

    // up
    
    // right
    // down
    // left
}


int main(){

    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,0,0},
        {1,1,1,1}
    };
    int row = 4;
    int col = 4;
    int srcx = 0;
    int srcy = 0;
    string output = "";

    printAllPath(maze,row,col,srcx,srcy, output);

//    string str = "abc";

//    int i=0;
//    printPermutation(str,i);


    return 0;
} 