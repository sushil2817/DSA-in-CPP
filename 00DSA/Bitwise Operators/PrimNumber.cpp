#include<iostream>
using namespace std;
int main(){

    // int a = 7;
    // bool isPrime = 1;
    // for(int i=2;i<a;i++){
    //     if((a%i) != 0){
    //         cout<<"a prime number";
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if(isPrime == 1){
    //     cout<<a<<" is a prime number";
    // }

    // for(int i=0;i<5;i++){
    //     cout<<"Hi "<<endl;
    //     cout<<"Hey "<<endl;
    //     continue;
    //     cout<<"Reply toh karde "<<endl;
    // }

    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j == 10){
                cout<<"Breal";
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }

return 0;
}