#include<iostream>
using namespace std;

int getQuotient(int divisor, int divident){
    int s = 0;
    int e = divident;

    
    int ans = -1;

    while(s <= e){

        if(divisor == 0){
            ans = 0; 
            return ans;
        }
        if(divident == 0){
            return 0;
        }

        int mid = s+(e-s)/2;
        if(mid*divisor == divident){
            return mid;
        }
        if(mid*divisor < divident){
            ans = mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        // mid = s+(e-s)/2;
    }
    return ans;
}

int main(){

    int divisor = 0, divident = -35 ;
    int n = -5;
    // cout<<abs(n)<<endl;    
    int ans = getQuotient(abs(divisor),abs(divident));

    if((divisor > 0 && divident < 0) || (divisor < 0 && divident > 0)){
        ans = (-1)*ans;
    }


    cout<<"Final ans is: "<<ans<<endl;


return 0;
}