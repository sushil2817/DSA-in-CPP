#include<iostream>
#include<string.h>
using namespace std;

bool checkPallindrom(char ch[], int start, int end){
    int a = start;
    int b = end - 1;

    while(a < = b){
        if(ch[a] == ch[b]){
            a++;
            b--;
        }
        else{
            return false;
        }
    }
}
int main(){

    char ch[100];
    cout << "Enter a string: ";
    cin.getline(ch, 100);
    bool isPallindrom = checkPallindrom(ch, 0, strlen(ch));
    if(isPallindrom){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }


return 0;
}