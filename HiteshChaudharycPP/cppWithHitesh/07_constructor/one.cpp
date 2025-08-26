#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int serving;
        vector<string>ingredients;

        Chai(){
            teaName = "Unknown Tea";
            serving = 1;
            ingredients = {"Water","Tea Leaves"};
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

    Chai defaultChai;

    defaultChai.displayChaiDetails();




return 0;
}