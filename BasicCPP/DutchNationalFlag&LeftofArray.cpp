// Dutch national flag algo
#include<iostream>
#include<vector>

using namespace std;

// T.C => O(n)
// T.C. => O(1)
void movleAllNegToLeft(int arr[], int n){
  //Dutch nation flag algo(two pointer )
      int l=0, h=n-1;

      while(l<h){
        if(arr[l]<0){
            l++;
        }else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
      }

}

int main(){
      int a[] = {1,2,-3,4,-5,6};
      int n = sizeof(a)/sizeof(int);

      movleAllNegToLeft(a,n);


      for( int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }


    return 0;
}