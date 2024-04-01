#include<iostream>
using namespace std;


 bool isPrime(int n){
            if(n<=1) return false;
            for(int i=2;i<n;i++){
                if(n%2==0){
                    return false;
                }
            }
            return true;
    }
  
    // T.C. =>>   O(n^2)

      int countPrimes(int n){
        // 0 & 1 not a prime
        // 2 is smallest prime no.
           int c= 0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                ++c;
            }
        }
        return c;
    
    }
int main(){

     
  


    return 0;
}