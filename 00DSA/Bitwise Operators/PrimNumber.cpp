#include<iostream>
using namespace std;
int main(){

    int a = 7;
    bool isPrime = 1;
    for(int i=2;i<a;i++){
        if((a%i) == 0){
            cout<<"not a prime number";
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1){
        cout<<a<<" is a prime number";
    }


return 0;
}