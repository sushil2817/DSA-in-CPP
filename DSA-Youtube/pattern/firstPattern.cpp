#include<iostream>
using namespace std;
int main(){

    int a = 4;

    for(int i = 1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i = 1;i<=a;i++){
        for(int j=a;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<endl;
    int count = 1;
    for(int i=1; i<a;i++){
        for(int j=1;j<a;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }


return 0;
}