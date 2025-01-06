#include<iostream>
#include<vector>
using namespace std; 

void count(vector<int>& nums){
    int zeros,ones,twos;
    zeros=ones=twos=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zeros++;
        }else if(nums[i]==1){
            ones++;
            
        }else{
            twos++;
            
        }
    }
    // spread

    int i=0;

    while(zeros--){
        nums[i] = 0;
        i++;
    }
    while(ones--){
        nums[i] = 1;
        i++;
    }
    while(twos--){
        nums[i] = 2;
        i++;
    }
}

int theePoint(vector<int>& nums){
int l=0,m=0,h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }else if(nums[0]==1){
            m++;
        }else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
    
}

int main(){
     vector<int>nums;
    //  nums.push_back(2);
    //  nums.push_back(0);
    //  nums.push_back(2);
    //  nums.push_back(1);
    //  nums.push_back(1);
    //  nums.push_back(0);
    int j = 6;

    for (int i = 0; i < j; i++) {
    int element;
    cout << "Enter element " << i << ": ";
    cin >> element;
    nums.push_back(element);
  }

    //  for(int i=0;i<nums.size();i++){
    //     int n;
    //     cin>>n;
    //     nums.push_back(n);
    //  }

     count(nums);
    //  theePoint(nums);
     for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
     }
    //  T.C. O(n);
    // S.C O(1);
       


    return 0;
}