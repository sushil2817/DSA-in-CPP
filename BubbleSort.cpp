//-----------Bubble Sort -------------//
//  Time Complexity is O(n^2)
//  Space Complexity is O(1)

#include<iostream>
#include<vector>
using namespace std;
 
void print(vector<int> &v){
   for(int i=0;i<v.size();++i){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}

// Sort in increasing order 
void bubbleSortInc(vector<int> &v){
       int n = v.size();
       for(int i=0;i<n-1;++i){
          for(int j=0;j<n-i-1;++j){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
          }
       }
}

// Sort in Decresing order 
void bubbleSortDec(vector<int> &v){
       int n = v.size();
       for(int i=0;i<n-1;++i){
          for(int j=0;j<n-i-1;++j){
            if(v[j] < v[j+1]){
                swap(v[j],v[j+1]);
            }
          }
       }
}

// swap all the array adjasent till the array is sorted
int main(){

   vector<int> v =  {5,4,3,2,1};
   vector<int> v1 =  {1,2,3,4,5};
   bubbleSortInc(v);
   bubbleSortDec(v1);
   print(v);
   print(v1);
   
    return 0;
}