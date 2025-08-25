#include<iostream>
using namespace std;

int main(){

    int chaiTemperature[5] = {56,65,80,90,30};

    cout<<"Chai Temperature ";

    for(int chaiTemp: chaiTemperature){
        cout<<chaiTemp<<" degree Calcius"<<endl;
    }

    return 0;
}