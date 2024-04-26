#include<iostream>
using namespace std;
int x = 2;//glable variable

void fun(){
    int x = 60;
    cout<<"inside fun: "<<x<<endl;
    ::x = 40;
    cout<<"inside fun: "<<::x<<endl;
}
int main(){
      
      x= 4; //global x
      int x = 20;// local to main fnx
    //   cout<<x<<endl;
    //   want to access global variable so use ::
    // cout<<::x<<endl;

    {
        int x = 50;
        {
            int x =44;
            cout<<x<<endl;
        }
        cout<<x<<endl;
        cout<<::x<<endl;

    }
    //  fun();

    return 0;
}