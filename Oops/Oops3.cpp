#include <iostream>
#include<vector>
using namespace std;

// Run Time PolyMorphism

class Animal
{
public:
  void speak()
  {
    cout << "Speaking" << endl;
  }

  Animal()
  {
    cout << "Animal constructor called" << endl;
  }
};

class Dog : public Animal
{
public:
  // override
  void speak()
  {
    cout << "barking" << endl;
  }

  Dog()
  {
    cout << "Dog constructor called" << endl;
  }
};

//--------------------IMPORTANT----------------------------
// Abstraction
// Encapsulation is a subset of Abstraction





int main()
{


//  dealocate 1D array
      // delete []arr


  // Dynamic 2D Array


  //   int row = 5;
  //   int col = 3;

  //  int** arr  = new int*[5];

  //  for( int i=0;i<row;i++){
  //   arr[i] = new int[col];
  //  }

  // //  printing
       
  //      for(int i=0;i<row;i++){
  //        for(int j=0;j<col;j++){
  //         cout<<arr[i][j]<<" ";
  //        }
  //        cout<<endl;
  //      }

  // delete [] arr 

  vector<vector<int>>arr(5,vector<int>(6,0));

    for(int i=0;i<5;i++){
      for(int j=0;j<6;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }

    // dealocation of 2d array

    // for( int i=0;i<row;i++){
    //    delete [] arr[i];
    // }

    // delete [] arr;


  // Animal* a = new Animal();
  // Dog* a = new Dog();
  // Animal* a = new Dog();
  // Dog *a = (Dog *)new Animal();

  // Animal* a = new Animal();
  // a->speak();

  // Dog* a = new Dog();
  // a->speak();

  // Dog a;
  // a.speak();

  // UpCasting
  // Animal* a = new Dog();
  // a->speak();

  // DownCasting
  // Dog* b = (Dog*)new Animal();
  // b->speak();

  return 0;
}