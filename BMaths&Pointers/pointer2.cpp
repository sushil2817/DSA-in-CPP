#include<iostream>
using namespace std;

void solve(int* p){

   p = p+1;

    //     cout<<"Inside solve-> arr:"<<arr<<endl;
    //  cout<<"Inside solve-> arr:"<<&arr<<endl;
        // cout<<"size of arr inside solve func: "<<sizeof(arr)<<endl;
        // because in this function arr is passing 
        //  "by reference" no complete arr pass but arr base addresh pass 
}

int main(){


   int a = 5;
   int*p = &a;
   cout<<"p: "<<p<<endl;
   cout<<"&p: "<<&p<<endl;
   cout<<"*p: "<<*p<<endl;

   solve(p);

   cout<<"p: "<<p<<endl;
   cout<<"&p: "<<&p<<endl;
   cout<<"*p: "<<*p<<endl;





//  ------ Pointer to Pointer -----------


    //  int a = 5;
    //  int* p = &a;
    //  int** q = &p;
    //  int ***r = &q;
    //  int ****s = &r;






//   int arr[] = {10,20,30,40,50};
//   cout<<"size of "<<sizeof(arr)<<endl;
    //  solve(arr,5);

    //  for(int i=0;i<3;i++){
    //     cout<<arr[i]<<" ";
    //  }
    // cout<<arr;

    //  cout<<"Inside main-> arr:"<<arr<<endl;
    //  cout<<"Inside main-> arr:"<<&arr<<endl;
      

// ------Pointer Imp. Doubt --------------
    // int arr[5] = {1,2,3,4,5};
    // int* ptr = arr;
    // gave you error
    // int* ptr =  &arr;  arr of pointer
    // int (*ptr)[5] = &arr; pointer to an array
    // cout<<(*ptr)[0];

    // char ch[10] = "Babber";
    // char* cptr = &ch;



    return 0;
}