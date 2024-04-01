#include<iostream>
using namespace std;
  int bs(int a[], int start, int end, int x){

    while(start<=end){
           int mid=(start+end)/2;
           if(a[mid]==x){
            return mid;
           }else if(a[mid]>x){
            end = mid-1;  
           }else{
            start = mid+1;
           }
    }
      return -1;
  }

int expSearch(int a[], int n, int x){
    if(a[0]==x)return 0;

    int i=1;
    while(i<n && a[i]<=x){
        i = i*2 ;// i*=2 || i= i<<1;
    }
     return bs(a,i/2, min(i,n-1),x);
}

// T.C => O( )
int main(){

    int a[] = {3,4,5,6,11,13,14,15,56,70};
    //   cout<<sizeof(a)<<end; => 40
    int n = sizeof(a)/sizeof(int);
     
    // cout<<n; => 10

    int x=13;
    int ans = expSearch(a,n,x);

    cout<<ans;


    return 0;
}