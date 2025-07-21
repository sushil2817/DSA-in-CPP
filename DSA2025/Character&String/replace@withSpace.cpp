#include<iostream>
#include<string.h>
using namespace std;

void replacerCharacter(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

// T.C => O(n)
// S.C => O(1)

int main(){

    char ch[100];
    cout << "Enter a string: ";
    cin.getline(ch, 100);
    
    replacerCharacter(ch, strlen(ch));
    
    cout << "Modified string: " << ch << endl;

return 0;
}