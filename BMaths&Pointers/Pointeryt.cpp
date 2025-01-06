// #include<iostream>
// using namespace std;
// int main(){

//     int num = 5;
//     // address of Operator -&

//     cout<<"address of num is "<<&num<<endl; 


//     int *ptr = &num;
//     cout<<"Value is: "<<*ptr<<endl;
//     cout<<"Address is: "<<ptr<<endl;
//     double d = 4.3;
//     double *p2 = &d;
//     cout<<"Value is: "<<*p2<<endl;
//     cout<<"Address is: "<<p2<<endl;
//     cout<<"size of integer is "<<sizeof(num)<<endl;
//     cout<<"size of pointer is "<<sizeof(ptr)<<endl; // 4 & 8 depend on system 
//     cout<<"size of pointer is "<<sizeof(p2)<<endl;

//     int *p; //bad pratice so always set 0 value
//     cout<<*p<<endl; // always give you garbage value

//     // int i=5;

//     // int *q = &i;
//     // cout<<q<<endl;
//     // cout<<*q<<endl;
//     // int *p0 = 0;
//     // p0 = &i;

//     // cout<<p0<<endl;
//     // cout<<*p0<<endl;


//     int num1 = 5;
//     int a = num1;
//     a++;

//     cout<<"Num value is: "<<num1<<endl;

//     int *ptr1 = &num;
//     cout<<"before "<<num<<endl;
//     (*ptr1)++;
//     cout<<"after "<<num<<endl;

//     // important 
//     int j = 3;
//     int *t = &j;
//     cout<<(*t)++<<endl;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<<a<<endl;
//     cout<<"address of a : "<<&a<<endl; 
//     // pointer creation
//     // int* ptr = &a;
//     // accessing value store at address stored in ptr
//     // cout<<"Acessing: "<<*ptr<<endl;
//     // cout<<ptr<<endl;
//     // cout<<&ptr<<endl;


//     int *ptr = 0;
//     cout<<*ptr<<endl;

// return 0;
// } 



#include<iostream>
using namespace std;
int main(){

// pointer with array

int arr[5] = {10,20,30,40,50};


// cout<<arr<<endl;
// cout<<arr[0]<<endl;
// cout<<&arr[0]<<endl;
// cout<<&arr[0]<<endl;
// cout<<&arr<<endl;

    
    // arr = arr+1;

    // int* ptr = arr;
    // // int * ptr2 = arr+1;

    // char ch[50] = "sushil";
    // char* cptr = ch;

    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<*cptr<<endl;
    // cout<<cptr<<endl;
    // cout<<&cptr<<endl;

        char ch[10] = 'sushil';
        char *cptr = &ch;

        cout<<cptr;


return 0;
}