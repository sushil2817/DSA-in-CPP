#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:
        // data members
        string teaName;
        int serving;
        vector<string> ingredients;

        // Member function

        void displayChaiDetails(){
            cout<<"Tea Name: "<<teaName<<endl;
            cout<<"Serving: "<<serving<<endl;
            cout<<"Ingrdients: ";
            for(string ingredient: ingredients){
                cout<<ingredient<<" ";
            }
            cout<<endl<<endl;
        }
};

int main(){

    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.serving = 5;
    chaiOne.ingredients = {"water","lemon","honey","sugar","tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.serving = 3;
    chaiTwo.ingredients = {"masala","ginger","tea","milk","water"};
    chaiTwo.displayChaiDetails();

return 0;
}