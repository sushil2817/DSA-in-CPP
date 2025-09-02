#include<iostream>
#include<vector>

using namespace std;


class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
    public:
        Chai(){
            teaName = "Unkonown tea";
            servings = 1;
            ingredients = {"Water","tea leaves"};
        };
        
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        // getter
        string getTeaName(){
            return teaName;
        }
        // setter
        void setTeaName(string name){
            // logic
            teaName = name;
        }
        // getter
        int getServings(){
            return servings;
        }
        // setter
        void setServings(int serv){
            servings = serv;
        }
        // getter
        vector<string> getIngredients(){
            return ingredients;
        }
        // setter
        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }



};

int main(){

    Chai chai;
    chai.setTeaName("Ginger tea");

    cout<<chai.getTeaName()<<endl;

return 0;
}