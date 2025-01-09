#include<iostream>
using namespace std;

bool isPalindrom(string s, int start, int end){
    // base case
    if(start >= end){
        return true;
    }

    // one case solution
    if(s[start] != s[end]){
        return false;
    }
    return isPalindrom(s,start+1,end-1);
}


int main(){

string s;
cin>>s;
int ans = isPalindrom(s,0,s.size()-1);

if(ans){
    cout<<"string is Palindrom "<<ans<<endl;
}else{
    cout<<"string is not Palindrom "<<ans<<endl;
}


return 0;
}