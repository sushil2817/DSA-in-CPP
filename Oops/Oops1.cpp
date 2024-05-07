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
  string type;

//default Constuctor
  Animal(){
   this->weight = 0;
   this->age = 0;
   this->type = "";
   cout<<"constructor called"<<endl;
  }


//   Perameterised Constructor
   
    Animal(int age ){
      this->age = age;
      cout<<"Perametrised Constructor Called"<<endl;
    }

    Animal(int age, int weight){
      this->age = age;
      this->weight = weight;
      cout<<"Peramertrised 2 Called"<<endl;
    }

    Animal(int age, int weight,string type){
      this->age = age;
      this->weight = weight;
      this->type  = type;
      cout<<"Peramertrised 3 Called"<<endl;
    }



    // copy Constructor
    Animal(Animal &obj){
      this->age = obj.age;
      this->weight = obj.weight;
      this->type = obj.type;
      cout<<"I am inside copy constructor "<<endl;
    }



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
   int setWeight(int weight){
      this->weight = weight;
      // this points to current object
   }
   ~Animal(){
      cout<<"I am inside destructor"<<endl;
   }
};


 int main(){

    // Object Creation

    // Static
   //  Animal ramesh(10,82,"ramesh");

   //  Animal a = ramesh;
   //  ramesh.age = 12;
   //  ramesh.name = "Ramesh";
   //  cout<<"Age of ramesh is: "<<ramesh.age<<endl;
   //  cout<<"Name of ramesh is: "<<ramesh.name<<endl;
     
   //    ramesh.eat();
   //    ramesh.eat();
    
   //   ramesh.setWeight(101);
   //   cout<<ramesh.getWeight();

         // Destructor

         Animal a;
         a.age = 5;
      
      

      

    // Dynamic memory
       
      //  Animal* suresh = new Animal(100);
   //     (*suresh).age = 15;
   //     (*suresh).name = "Suresh";
   // // alternate -> dynamic
   //     suresh->age = 17;
   //     suresh->name = "baby";
   //     suresh->eat();
   //     suresh->sleep();

   Animal*b = new Animal();
   b->age = 12;

   // manually des called

   delete b;


       
     return 0;
 }