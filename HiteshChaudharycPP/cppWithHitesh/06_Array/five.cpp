#include<iostream>
using namespace std;
int main(){

    int chaiSales[3][4] = {
        {50,60,70,80},
        {40,50,80,90},
        {10,20,30,40},
    };

    for(int i=0;i<3;i++){
        cout<<"I'm at shop: "<<i+1<<endl;
        for(int j=0;j<4;j++){
            cout<<chaiSales[i][j]<<" cups"<<endl;
        }
    }

return 0;
}