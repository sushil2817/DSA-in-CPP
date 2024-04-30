//  classs is called as member function and member variable
//  class is a blue print

// object -> object is a instance of a class
// class have always a size 1byte
// ***********  smallest addresable memory in system is a    1Byte not 1 bit   ************

#include<iostream>
#include<string>
#include<vector>
using namespace std;

 class Student{
    // int id;
    // int age;
    string name;
    // int nos;
    void study(){
        cout<<"Studiying"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
 };

 int main(){
   

    cout<<sizeof(Student)<<endl;
        // Student s1;
        // Student s2;
     
     return 0;
 }