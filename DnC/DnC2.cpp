// by reference me string glt out put deti h


#include<iostream>
#include<vector>
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

// a function that will handel all the below mentioned possibilities
//  3 possibilty hai
        //-> path closed
        // out of bound
        // check is pos already visited  
bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool >> & visited){
     if(
     (newx>=0 && newx < row ) && (newy >=0 && newy< col) && 
     (maze[newx][newy] == 1) && 
       visited [newx][newy] == false
     ){
            return true;
     }else{
        return false;
     }
}

void printAllPath(int maze[][4], int row, int col, int srcx, int srcy,string  &output,vector<vector<bool>>&visited){

    //   base case
    // destination coordinates are[row-1], [col-1];

    if(srcx == row-1 && srcy == col-1 ){
        // reached destination
        cout<<output<<endl;
        return;
    }
    // 1case solve kro baki recurstion sambhal lega

    //  execute

    // up
    //  3 possibilty hai
        //-> path closed
        // out of bound
        // check is pos already visited  
        int newx = srcx-1;
        int newy = srcy;

        if(isSafe(srcx, srcy, newx ,newy, maze,row, col, visited)){
            //marked visited
            visited[newx][newy] = true;
            // call recurstion
            output.push_back('U');
            printAllPath(maze, row, col, newx, newy, output,visited);
            // backtracking
            output.pop_back();
            visited[newx][newy] = false;

        }

    
    // right
      newx = srcx;
      newy = srcy+1;

        if(isSafe(srcx, srcy, newx ,newy, maze,row, col, visited)){
            //marked visited
            visited[newx][newy] = true;
            // call recurstion
            output.push_back('R');
            printAllPath(maze, row, col, newx, newy, output,visited);
            // backtracking
            output.pop_back();
            visited[newx][newy] = false;
        }
    // down
      newx = srcx+1;
      newy = srcy;

        if(isSafe(srcx, srcy, newx ,newy, maze,row, col, visited)){
            //marked visited
            visited[newx][newy] = true;
            // call recurstion
            output.push_back('D');
            printAllPath(maze, row, col, newx, newy, output,visited);
            // backtracking
            output.pop_back();
            visited[newx][newy] = false;
        }
    // left
     newx = srcx;
     newy = srcy-1;

        if(isSafe(srcx, srcy, newx ,newy, maze,row, col, visited)){
            //marked visited
            visited[newx][newy] = true;
            // call recurstion
            output.push_back('L');
            printAllPath(maze, row, col, newx, newy, output,visited);
            // backtracking
            output.pop_back();
            visited[newx][newy] = false;
        }
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
    // created visited 2D array
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    if(maze[0][0]==0){
        // src position is closed that means tat cannot moves
        cout<<"No path Exists"<<endl;
    }else{
        visited[srcx][srcy]=true;
        printAllPath(maze,row,col,srcx,srcy,output, visited);
    }

    


//    string str = "abc";

//    int i=0;
//    printPermutation(str,i);


    return 0;
} 