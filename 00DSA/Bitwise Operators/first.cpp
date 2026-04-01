#include<iostream>
using namespace std;

int main(){
    // int a = 4;
    // int b = 6;

    // cout<<"a&b : "<< (a&b) <<endl;
    // cout<<"a|b : "<< (a|b) <<endl;
    // cout<<"~a : "<< ~a <<endl;
    // cout<<"~b : "<< ~b <<endl;
    // cout<<"a^b : "<< (a^b) <<endl;

    // cout<<(17>>1)<<endl; //8
    // cout<<(17>>2)<<endl; //4
    // cout<<(19<<1)<<endl; //38
    // cout<<(19<<2)<<endl; //76

    // int a,b = 1;
    // a = 10;

    // if(++a)
    //     cout<<b; // a = 11, b = 1
    // else
    //     cout<< ++b;

    // int a = 1,b = 2;

    // if(a-- > 0 || ++b >2 ){ // a = 0, b=2
    //     cout<<"Stage 1 - Inside IF"<<endl; // print
    // }else{
    //     cout<<"Stage 2 - Inside else";
    // }
    // cout<< a <<" "<< b <<endl; 

    // int number = 3;
    // cout<<25*(++number)<<endl; //100

    int a = 1, b = a++, c = ++a;

    cout<<b<<endl; // 1
    cout<<c<<endl; // 3

    return 0;
}