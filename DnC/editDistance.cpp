// leetcode 72
#include<iostream>
using namespace std;

int solve(string& a, string& b, int i, int j){
        // base case
        if(i>=a.length()){
            // word1 string end ho gyi
            // yani word 1 ki lenght may be word 2 se choti h
            return  b.length()-j;
        }
        if(j>=b.length()){
            // word2 string end ho gyi
            // yani word 2 ki lenght may be word 1 se choti h
            return  a.length()-i;
        }




        int ans = 0;
        if(a[i]==b[j]){
            // match
            ans = 0+solve(a,b,i+1,j+1);
        }else{
            // not match
            // operation perfome
            // insert
            int option1 = 1+ solve(a,b,i,j+1);
            // remove
            int option2 = 1+ solve(a,b,i+1,j);
            // replace
            int option3 = 1+ solve(a,b,i+1,j+1);
            ans = min(option1,min(option2,option3));

            ans = min(option1,min(option2,option3));

        }
        return ans;
}

int minDistance(string word1, string word2){

    int i=0,j=0;

    int ans = solve(word1,word2,i,j);
    return ans;
}


int main(){

    string word1 = "horse";
    string word2 = "ros";

    cout<<minDistance(word1,word2);
    
    
    return 0;
}