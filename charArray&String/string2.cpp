// I want to find a pattern in string so which names algos are exits and  there time complexity
// find and erase fxn imlimentation



#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s){
    string ans = "";
    int index=0;
    while(index<s.length()){
      
       if( ans.length()>0 && ans[ans.length()-1]==s[index]){
        ans.pop_back();
       }else{
        ans.push_back(s[index]);
       }
        index++;
    }
    return ans;
}

int main(){
     
    string str = "abbaca";

    cout<<removeDuplicates(str)<<endl;

    return 0;
} 