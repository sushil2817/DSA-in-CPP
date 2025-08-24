#include<iostream>
using namespace std;
int main(){

    float teaPrice = 49.99;

    int roundedTeaPrice = (int) teaPrice;
    int teaQuanttity = 2;
    double totalPrice = teaPrice*teaQuanttity;
    cout<<totalPrice<<endl;

return 0;
}