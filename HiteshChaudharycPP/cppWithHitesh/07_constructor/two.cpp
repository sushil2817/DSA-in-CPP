#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int serving;
        vector<string>ingredients;
        // parameterise constructor
        Chai(string name, int servings, vector<string> ingredient){
            teaName = name;
            serving = servings;
            ingredients = ingredient;
            cout<<"Constructor Called"<<endl;
        }

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

    Chai defaultChai("Lemon Tea",2,{"Water","lemon","Honey"});

    defaultChai.displayChaiDetails();




return 0;
}