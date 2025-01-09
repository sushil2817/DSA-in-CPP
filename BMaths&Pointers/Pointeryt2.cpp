// #include<iostream>
// using namespace std;
// int main(){

//     // int arr[10] = {23,122,41,67};

//     // cout<<"address of first memory block is "<<arr<<endl;
//     // cout<<arr[0]<<endl;
//     // cout<<"address of first memory block is "<<&arr[0]<<endl;


//     // cout<<"4th "<<*arr<<endl;
//     // cout<<"5th "<<*arr+1<<endl;
//     // // cout<<"5th "<<arr+1<<endl;
//     // cout<<"5th "<<*(arr+1)<<endl;
//     // cout<<"5th "<<(*arr)+1<<endl;
//     // cout<<"5th "<<arr[2]<<endl;
//     // cout<<"5th "<<*(arr+2)<<endl;

//     // int i = 3;
//     // cout<<i[arr]<<endl;
//     // cout<<*(i+arr)<<endl;

//     // int temp[10] = {1,2};

//     // cout<<sizeof(temp)<<endl;
//     // cout<<"1st "<<sizeof(*temp)<<endl;
//     // cout<<"2st "<<sizeof(&temp)<<endl;

//     // int *ptr = &temp[0];
//     // cout<<sizeof(ptr)<<endl;
//     // cout<<sizeof(*ptr)<<endl;
//     // cout<<sizeof(&ptr)<<endl;



//     int a[20] = {1,2,3,4};
//     cout<<"->"<<&a[0]<<endl;
//     // cout<<&a<<endl;
//     // cout<<a<<endl;

//     int *p = &a[0];
//     // cout<<p<<endl;
//     // cout<<*p<<endl;
//     cout<<"->"<<&p<<endl;
    


// return 0;
// }


#include<iostream>
using namespace std;

void solve(int* &p){ 
    // by refrence pass
    // // cout<<"Size of array inside func: "<<sizeof(arr)<<endl;
    // cout<<"Inside solve -> arr: "<<arr<<endl;
    // cout<<"Inside solve -> &arr: "<<&arr<<endl;
    // *arr = *arr+1;

        p=p+1;

}
int main(){

    // int arr[] = {10,20,30};
    // cout<<"Size of array: "<<sizeof(arr)<<endl;
    // solve(arr,3);

    // cout<<"Inside main -> arr: "<<arr<<endl;
    // cout<<"Inside main -> &arr: "<<&arr<<endl;

    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<" ";

    int a = 5;
    int *p = &a;


    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;

    solve(p);

    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;
return 0;
}