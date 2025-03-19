#include<iostream>
#include<vector>
using namespace std;

void print(vector<char>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(auto v:v){
        cout<<v<<" ";
    }
    cout<<endl;
}

int main(){

    // char vector
    vector<char>v;

    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    print(v);

    // cout<<"Front element "<<v[0]<<endl;
    cout<<"Front element "<<v.front()<<endl;
    // cout<<"Front element "<<v[v.size()-1]<<endl;
    cout<<"Front element "<<v.back()<<endl;

return 0;
}