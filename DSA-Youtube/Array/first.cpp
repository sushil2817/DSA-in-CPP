// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     cout<<"printing the array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void printCharArray(char arr[], int size){
//     cout<<"printing the array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[15];

//     // cout<<"Value at 14 index "<<arr[14]<<endl;
//     // cout<<"Value at 15 index "<<arr[15]<<endl;
//     // cout<<"Value at 28 index "<<arr[28]<<endl;
    
//     int secondArr[3] = {5,6,7};
//     // cout<<"Value at 28 index "<<secondArr[2]<<endl;
//     // printArray(secondArr,3);

//     int sizeOfArr = sizeof(secondArr)/sizeof(secondArr[0]);

//     // cout<<sizeOfArr<<" ";

//     char ch[5] = {'a','b','c','d','e'};
//     cout<<ch[2]<<endl;
//     printCharArray(ch,5);
// return 0;
// }



#include<iostream>
#include <climits>
using namespace std;


int getMax(int num[], int size){
    int max = INT_MIN;

    for(int i=0;i<size;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int size){
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}



int main(){

    int size;
    cin>>size;

    int num[size];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"printing the max "<<getMax(num,size)<<endl;
    cout<<"printing the min "<<getMin(num,size)<<endl;

return 0;
}