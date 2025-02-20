// search in infinite array (unbounded array)
// O(logi) is the position of the target element in the array
#include<iostream>
using namespace std;


int bs(int a[], int start, int end, int x){
    while(start<= end){
        int mid = (start+end)/2;
         if(a[mid]==x){
            return mid;
         }
         else if(x>a[mid]){
               start = mid+1;
         }else{
            end = mid-1;
         }
    }
    return -1;
}

int expSearch(int a[], int n, int x){
    if(a[0]==x){
        return 0;
    }

    int i=1;
    while(i<n && a[i]<=x){
        i *= 2 ;
        // i = i<<1;
    }
        return bs(a,i/2,min(i,n-1),x);
}

int expSearch2(int a[], int n, int x){
    if(a[0]==x){
        return 0;
    }
       int i=0,j=1;
       while(a[j]<x){
        i=j;
        j=j*3;
       }
       return bs(a, i, j, x);
}


int main(){

   int a[] = {3,4,5,6,11,13,14,15,56,70};

   int n = sizeof(a)/sizeof(int);
   int x = 70;

     int ans = expSearch2(a,n,x);
     cout<<ans<<endl;
     return 0;
}