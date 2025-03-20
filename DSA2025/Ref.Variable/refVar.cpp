#include<iostream>
using namespace std;


void increment (int &n){
    n=n+1;
}


int main(){

    int n =5; // normal integer variable
    int &k = n; // k is a reference variable
    int &c = n; // c is a reference variable

    
    // k++;
    
    // cout<<"n:  "<<n<<endl;
    // cout<<"k:  "<<k<<endl;
    // cout<<"c:  "<<c<<endl;
    cout<<"N in main "<<n<<endl;
    increment(n);
    cout<<"n: "<<n<<endl;

return 0;
}