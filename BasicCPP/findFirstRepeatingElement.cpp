#include<iostream>
#include <unordered_map> 
using namespace std;

// Brute force

int firstIndex(int arr[], int n){
  
  for(int i=0;i<n;i++){
            bool isRepeated = false;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    isRepeated = true;
                    return i+1;
                }
            }
         }
    return -1;
}

// optimized solution
int firstIndex1(int arr[], int n){
       unordered_map<int , int>hash;
       for(int i=0;i<n;i++){
        hash[arr[i]]++;
       }

       for(int i=0;i<n;i++){
        if(hash[arr[i]] > 1){
            return i+1;
        }

       }
       return -1;
}


int main(){

    int arr[] = {1,5,2,3,4,5,6};
    int n = 7;
    cout<<firstIndex(arr,n);

         
    return 0;
}