#include<iostream>
#include<string.h>
using namespace std;

void convertUpperCase(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        char currCharacter = ch[index];
        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
}
void convertLowerCase(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        char currCharacter = ch[index];
        if(currCharacter >= 'A' && currCharacter <= 'Z'){
            ch[index] = currCharacter - 'A' + 'a';
        }
        index++;
    }
}


int main(){

    char ch[100];
    cin.getline(ch,100);
    convertUpperCase(ch,strlen(ch));
    cout<<"After UppperCase "<<ch<<endl;
    convertLowerCase(ch,strlen(ch));
    cout<<"After LowerCase "<<ch<<endl;



return 0;
}