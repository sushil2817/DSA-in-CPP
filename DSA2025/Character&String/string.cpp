#include<iostream>
using namespace std;
int main(){

    string name;

    getline(cin,name);
    // cout<<"Printing the name: "<<name<<endl;
    // cout<<"Printing the first char: "<<name[0]<<endl;

    // int index = 0;
    // while(name[index] != '\0'){
    //     cout<<"Index: "<<index<<" "<<name[index]<<" "<<endl;
    //     index++;
    // }
    // cout<<"printing the index 6 value: "<<name[6]<<endl;
    // int value = name[6];
    // cout<<"printing the value of index 6: "<<value<<endl;

    cout<<"Length of the string: "<<name.length()<<endl;
    cout<<"String is empty : "<<name.empty()<<endl;
    cout<<"First character: "<<name.front()<<endl;
    cout<<"Last character: "<<name.back()<<endl;
    cout<<"at char: "<<name.at(5)<<endl;
return 0;
}