#include<iostream>
using namespace std;
int main(){

    int n = 234;
    int product = 1;
    int sum = 0;
    while (n != 0){
            int rem = n%10;
            product = product*rem;
            sum =  sum + rem;
            n=n/10;
        }
        cout<<product<<endl;
        cout<<sum<<endl;
        cout<< (product-sum) <<endl;
return 0;
}