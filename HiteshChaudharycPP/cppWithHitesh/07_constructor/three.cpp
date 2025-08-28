#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string* teaName;
        int serving;
        vector<string>ingredients;
        // parameterise constructor
        Chai(string name, int servings, vector<string> ingredient){
            teaName = new string (name);
            serving = servings;
            ingredients = ingredient;
            cout<<"Constructor Called"<<endl;
        }

        Chai(const Chai& other){
            teaName = new string (*other.teaName);
            serving = other.serving;
            ingredients = other.ingredients;
            cout<<"Copy constructor Called"<<endl;
        }
        

        ~Chai(){
            delete teaName;
            cout<<"Destructor Called"<<endl;
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

    // copy the object
    Chai copiedChai = defaultChai;
    copiedChai.displayChaiDetails();

    *defaultChai.teaName = "New Tea Name";
    cout<<"Lemon Tea--------"<<endl;;
    defaultChai.displayChaiDetails();
    cout<<"Copied Tea--------"<<endl;
    copiedChai.displayChaiDetails();

return 0;
}