#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printvv(vector<vector<int>>&v){
    for(int i=0;i<v.size();++i){
       vector<int>&temp = v[i];
       int a = temp[0];
       int b = temp [1];
       cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}
// bool mycomp(int&a, int&b){
//      return a>b; //decresing order sorting
//      return a<b; // increaing order sorting
// }


bool mycomfor1stIndex(vector<int>&a,vector<int>&b){
    // 0 index base sorting
    //   return a[0] < b [0];
    // 1st index base sorting
      return a[1] > b[1];
}

int main(){

//   sort on vecotr
// sort(v.begin(),v.end());
     
    //  vector<int> v = {44,33,55,22,11};
    //  sort(v.begin(),v.end()); 
    // //by default increaing
    // sort(v.begin(),v.end(),mycomp);

    // vector of vector sorting

     vector<vector<int>>v = {{1,44},{0,55},{0,22},{0,11},{2,33}};
        
    //     cout<<"enter the size \n";
    //     int n; cin>>n;

    //     for(int i=0;i<n;i++){
    //         int a,b;
    //         cout<<"enter two element a, b \n";
    //         cin>>a>>b;
    //         vector<int>temp;
    //         temp.push_back(a);
    //         temp.push_back(b);
    //         v.push_back(temp);
    //     }
    //   cout<<"here are the values";
    //  printvv(v);
     cout<<"sorted by 1st index"<<endl;
        sort(v.begin(),v.end(),mycomfor1stIndex);
        printvv(v);


    return 0;
}

