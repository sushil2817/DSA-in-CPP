#include<iostream>
using namespace std;
int main(){

    int arr[10] = {23,122,41,67};

    cout<<"address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;


    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    // cout<<"5th "<<arr+1<<endl;
    cout<<"5th "<<*(arr+1)<<endl;
    cout<<"5th "<<(*arr)+1<<endl;
    cout<<"5th "<<arr[2]<<endl;
    cout<<"5th "<<*(arr+2)<<endl;

    int i = 3;
    cout<<i[arr]<<endl;
    cout<<*(i+arr)<<endl;


return 0;
}