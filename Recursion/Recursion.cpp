// A Function call itself
// ----ek Case tum solve kr do Baki ka recursion dekh lega-----

#include<iostream>
using namespace std;

int fectorial(int num){
    // Base Case
      if(num == 0 || num == 1){
       return 1;
      }
      if(num == 1){
        return 1;
      }
    // recurion relation
    return num*fectorial(num-1);
}

void printCounting(int num){
    if(num == 0){
        return;
    }
    cout<<num<<" ";
    printCounting(num-1);
}
 int pow(int num){
    if(num == 0){
        return 1;
    }
    int ans = 2*pow(num-1);
    return ans;

 }

int fibonachi(int num){
    // base case 
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }

    return fibonachi(num-1)+fibonachi(num-2);

}

int sumofNum(int num){
    if(num == 1){
        return 1;
    }
    return num+sumofNum(num-1);
}
int main(){
   
     int num;
     cin>>num;
     
     int ans = fectorial(num);
     cout<<ans<<endl;
    printCounting(num);
    cout<<endl;
    cout<<pow(10)<<endl;

    cout<<fibonachi(5)<<endl;
    cout<<sumofNum(5)<<endl;;
    


    return 0;
}