//  classs is called as member function and member variable
//  class is a blue print

// object -> object is a instance of a class
// class have always a size 1byte
// ***********  smallest addresable memory in system is a    1Byte not 1 bit   ************

//Paading -->> sabse bde data type ke nearest multiple  size ki padding add krte hai

// Access modifier -> Public,Private,Protected
// access modifier 

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Animal{
 
 private:
  int weight;

  public:
 // state or properties
  int age;
  string name;


//   behaviour
  void eat(){
     cout<<"eating"<<endl;
  }
   void sleep(){
      cout<<"sleeping"<<endl;
   }

   int getWeight(){
       return weight;
   }
   int setWeight(int w){
      weight = w;
   }
};


 int main(){

    // Object Creation

    // Static
    Animal ramesh;
    ramesh.age = 12;
    ramesh.name = "Ramesh";
    cout<<"Age of ramesh is: "<<ramesh.age<<endl;
    cout<<"Name of ramesh is: "<<ramesh.name<<endl;
     
      ramesh.eat();
      ramesh.eat();
    
     ramesh.setWeight(101);
     cout<<ramesh.getWeight();

      

    // Dynamic memory
       
       Animal* suresh = new Animal;
       (*suresh).age = 15;
       (*suresh).name = "Suresh";
   // alternate -> dynamic
       suresh->age = 17;
       suresh->name = "baby";
       suresh->eat();
       suresh->sleep();


       
     return 0;
 }