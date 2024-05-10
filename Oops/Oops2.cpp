// # four Piller of Oops

// 1) Encapsulation(Data Hiding) -> when you wrap all data member and member function in a capsule and scope -> when you make all data member and member function private you called it "perfect encapsulation"

// 2) Inheritance ==> child classname : Access modifier parentlass Name {}

/*   Base Class            Child CLass
                        public     private    protected     
       public           public       
       private
       protected
*/

/*      Type of Inheritance
            1) Single
            2) multi-level
            3) multiple
            4) hierachical
            5) hybride
*/


#include <iostream>
using namespace std;

  // single level---------------
// class Animal{
// //    private://(full encapsulation)
//   public:
//      int age;

// };


// class Dog: public Animal{
//          public:
//          void print(){
//           cout<<this->age;

//          }
// };


// Multilevel-------------------

// class Fruit{
//   public:
//   string name;
// };

// class Mango: public Fruit{
//       public:
//       int weight;
// };

// class Alphanso: public Mango{
//        public:
//        int sugarLevel;
// };


// multiple ------------------

class A{
  public:
  int physic;
};
class B{
   public:
   int chemistry;
};
class C: public A, public B{
    public:
    int maths;
};


int main() {

//  multiple --------------
  
    C obj;
    cout<<obj.chemistry<<" "<<obj.maths<<" "<<




//  multilevel Inheritance-----------
      // Alphanso a;

      // cout<<a.name<<" "<<a.weight<<" "<< a.sugarLevel<<" "<<endl;

// single------------
    //  Dog d1;
    //  cout<<d1.age;
    //  d1.print();
    // cout<<d1.age;
    
    // d1.bark();
    // cout<<"Hello World!";
    return 0;
}