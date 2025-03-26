#include<iostream>
#include<vector>
using namespace std;
int main(){

    // int arr[5];
    vector<int>v(5,-101);
    vector<int> v1;
    cout<<v1.size()<<endl;

    // cout<<"Size of vector "<<v.size();

    // cout<<endl<<"Printing vectore "<<endl;

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;

    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(57);
    v.push_back(58);

    cout<< v.empty()<<endl;



    // 2d vector

    vector< vector<int> >arr(5,vector<int>(10,101));
    // row size -> arr.size();
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    vector< vector<int> > brr;

    vector<int>vec1(10,0);
    vector<int>vec2(5,8);
    vector<int>vec3(4,0);
    vector<int>vec4(6,8);
    vector<int>vec5(7,9);


    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}