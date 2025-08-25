#include<iostream>
using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for(int i=0;i<size;i++){
        total += chai[i];
    }
    return total;
}

int main(){

    int chaiServed[7] = {10,20,30,40,50,60,70};
    int totalServedChai = totalChaiServed(chaiServed,7);

    cout<<totalServedChai;

return 0;
}