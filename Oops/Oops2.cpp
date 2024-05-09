// # four Piller of Oops

// 1) Encapsulation(Data Hiding) -> when you wrap all data member and member function in a capsule and scope -> when you make all data member and member function private you called it "perfect encapsulation"

// 2) Inheritance ==> child classname : Access modifier parentlass Name {}


#include <iostream>
using namespace std;

class Animal{
//    private://(full encapsulation)
  protected:
   int age;
   int weight;
   void eat(){
    cout<<"Eating"<<endl;
   }

   int getAge(){
    return this->age;
   }
   void setAge(int age){
    this->age = age;
   }

};


class Dog: private Animal{
         public:
         void print(){
          cout<<this->age;

         }
};

int main() {

    Dog d1;
    cout<<d1.age<<endl;
    cout<<d1.weight<<endl;
    d1.eat();
    // d1.bark();
    // cout<<"Hello World!";
    return 0;
}