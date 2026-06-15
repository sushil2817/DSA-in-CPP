#include<iostream>
using namespace std;

int countZeroAndOnce(int arr[], int size){

    int Zero = 0;
    int Once = 0;

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            Zero++;
        }
        else{
            Once++;
        }
    }

    cout<<"Zero "<<Zero<<endl;
    cout<<"Once "<<Once<<endl;

}


int main(){


    int arr[] = {0,1,1,1,1,1,0,0,0,0,0,0,1,1,1,3,4,5,2,5,0,11,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);


    countZeroAndOnce(arr,size);



return 0;
}