#include<iostream>
#include<string.h>
using namespace std;
int findLenth(char ch[], int size){
    int length = 0;
    int index = 0;

    while(ch[index] != '\0'){
        index++;
    }
    
    for(int i=0;i<size;i++){ 
        if(ch[i] == '\0'){
            // ruk jao
            break;
        }else{
            length++;
        }
    }
    return length;
}
int main(){

    char ch[100];
    cin>>ch;
    int len = findLenth(ch,100);
    cout<<"Lenght of string is: "<<len<<endl;
    cout<<"Lenght of string is: "<<strlen(ch)<<endl;
    // char ch[100];
    
    // // input
    // cin.getline(ch,100);

    // // print
    // cout<<"Printing the char array "<<ch;
    // for(int i=0;i<10;i++){
    //     cout<<"At Index: "<<i<<" "<<ch[i]<<endl;
    // }
    // char temp = ch[6];
    // int val = (int)temp;
    // cout<<"Printitng int value: "<<val<<endl;

return 0;
}