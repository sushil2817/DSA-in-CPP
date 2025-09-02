#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int serving;
        vector<string> ingredients;


        // deligating construction

        Chai(string name):Chai(name,1,{"water","teaLeaves"}){};

        // main constructor
        Chai(string name, int serve, vector<string> ingrer ){
            teaName = name;
            serving = serve;
            ingredients = ingrer;

            cout<<"Main constructor called!"<<endl;
        }

        void displayChaiDetails(){
            cout<<"Tea Name: "<<teaName<<endl;
            cout<<"Servings: "<<serving<<endl;
            cout<<"Ingrdients: ";
            for(string ingredient: ingredients){
                cout<<ingredient<<" ";
            }
            cout<<endl;
        }
};

int main(){

    Chai quickChai("Quick chai");

    quickChai.displayChaiDetails();

return 0;
}