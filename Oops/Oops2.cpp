// # four Piller of Oops

// 1) Encapsulation(Data Hiding) -> when you wrap all data member and member function in a capsule and scope -> when you make all data member and member function private you called it "perfect encapsulation"

// 2) Inheritance ==> child classname : Access modifier parentlass Name {}

/*   Base Class            Child CLass
                       
                        public     private    protected
       public           public     Private    Protected
       private          NA         NA         NA
       protected         
*/

/*      Type of Inheritance
            1) Single
            2) multi-level
            3) multiple
            4) hierachical
            5) hybride
*/



//  PolyMorphism => existing in many forms

    //  1) Compile Time PolyMorphism
    //  2) Run Time PolyMorphism

/*  1)compile time polymorphism
        a) function overloading
        b) operator overloading



*/  

#include <iostream>
using namespace std;


// ploymorphism

//     class Maths{
//       public :
//       int sum (int a, int b){
//         return a+b;
//       }
//       int sum (int a, int b, int c){
//         return a+b+c;
//       }
//       int sum (int a, float b){
//         return a+b+100;
//       }

//       // double sum(int a, int b){
//       //   retun 100;
//       // }
// };

class Param{
  public :
  int val;

    void operator+(Param& obj2){
              int val1 = this->val;
              int val2 = obj2.val;
              cout<<(val2-val1)<<endl;
    }
};



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

// class A{
//   public:
//   int physic;
//   int chemistry;

//   A(){
//     chemistry = 104;
//   }

// };
// class B{
//    public:
//    int chemistry;
//    B(){
//       chemistry=105;
//    }
// };
// class C: public A, public B{
//     public:
//     int maths;
// };

// Dimond problem when two class has same data member and a child class inherit both class properties so how compiler this is which class propertie this is
// ---------Dimond problem-------------------

// Heirarical inheritance --------------

// class Car{
//     public:

//     int age;
//     int weight;
//     string name;

//     void speedUp(){
//           cout<<"Speeding Up"<<endl;
//     }

// };

// class Scorpio: public Car{

// };

// class Fortune: public Car{

// };

// Hybrid inheritance -------------

int main()
{

  //  polimorphism
  // Maths obj;
  // cout<<obj.sum(2,5.7f);

  Param obj1,obj2;
  obj1.val = 7;
  obj2.val = 2;

  obj1+obj2;
  // Hybrid inheritance -------------

  // Heirarical inheritance --------------

  // Scorpio s11;
  // s11.speedUp();

  // Fortune f11;
  // f11.speedUp();

  //  multiple --------------

  // C obj;
  // cout<<obj.A::chemistry<<" "<<obj.maths<<" "<<obj.physic;

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