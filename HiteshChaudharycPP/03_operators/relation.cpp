#include<iostream>
using namespace std;
int main(){
    int cups;
    cout<<"Enter the number of cups you have";

    if(cups >= 20){
        cout<<"You got a GOLD medal"<<endl;
    }else if (cups >= 10 && cups < 20){
        cout<<"You got a SILVER medal"<<endl;
    }else{
        cout<<"You have no medal"<<endl;
    }


return 0;
}