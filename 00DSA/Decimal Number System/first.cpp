#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        cout<<"Bit "<<bit<<endl;
        ans = (bit * pow(10,i) ) + ans;
        cout<<"Ans "<<ans<<endl; 
        n = n >> 1;
        cout<<"N "<<n<<endl; 
        i++;
    }

    cout<<"Answer is "<<ans<<endl;

return 0;
}