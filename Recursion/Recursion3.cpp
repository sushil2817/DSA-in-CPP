#include<iostream>
#include<vector>
using namespace std;
// -------------leet code 322 coin change--------------


// class Solution {
// public:

//     int solve(vector<int>& coins, int amount){
//                  if(amount == 0){
//             return 0;
//          }
//          int mini = INT_MAX;
//          int ans = INT_MAX;

//          for(int i=0;i<coins.size();i++){
//             int coin = coins[i];
//           //current coin ko sir tabhi use krenge 
//           //jab uski value <= amount hogi
//             if(coin <= amount){
//                 int recAns = solve(coins,amount-coin);
//                 if(recAns != INT_MAX){
//                 ans = 1 + recAns;
//                 }
//                 mini = min(mini,ans);
//             } 
//          }
//             return mini;
//     }
           
    
//     int coinChange(vector<int>& coins, int amount) {
//            int ans = solve(coins,amount);
//             if(ans == INT_MAX){
//                 return -1;
//             }else{
//                 return ans;
//             }
//     }
// };

// ----------------------GFG  maximizeTheCuts ----------
// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;



// // } Driver Code Ends
// class Solution
// {
//     public:
//     //Function to find the maximum number of cuts.
//     int maximizeTheCuts(int n, int x, int y, int z)
//     {
        
//         if(n==0){
            
//             return 0;
//         }
        
//         if(n < 0){
//             return INT_MIN;
//         }
        
//         // maine x len ka 1 dehement cut krliya and baaki recursion dekhlega
//         int option1 = 1 + maximizeTheCuts(n-x,x,y,z);
//         // maine y len ka 1 dehement cut krliya and baaki recursion dekhlega
//         int option2 = 1 + maximizeTheCuts(n-y,x,y,z);
//         // maine z len ka 1 dehement cut krliya and baaki recursion dekhlega
//         int oution3 = 1 + maximizeTheCuts(n-z,x,y,z);
         
//          int finalAns = max(option1, max(option2,oution3));
//          return finalAns;
//     }
// };

// //{ Driver Code Starts.


// int main() {
    
//     //taking testcases
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         //taking length of line segment
//         int n;
//         cin >> n;
        
//         //taking types of segments
//         int x,y,z;
//         cin>>x>>y>>z;
//         Solution obj;
//         //calling function maximizeTheCuts()
//         cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

//     }

// 	return 0;
// }
// // } Driver Code Ends

// ----------------------GFG  maximizeTheCuts ----------

bool checkSorted(int *arr, int size, int index){

   if(index>=size){
     return true;
   } 
     if(arr[index]>arr[index-1]){
       checkSorted(arr,size,index+1); }
       else{
          return false;
       }
}

// -----------IMPORTANT PATTERN YAD RAKHNA------------------
// SubSequences of String
void findSubsequences(string str, string output, int index,vector<string> &store){
    // base case
    if(index > str.length()){
        // ans jo h output string me build ho chuka h 
        // print
        // cout<<"->"<<output<<endl;
        store.push_back(output);
        return;
    }

    char ch = str[index];
 
        //include
        output.push_back(ch);
        findSubsequences(str,output,index+1,store);

        // exclude
         
         output.pop_back();
         findSubsequences(str,output,index+1,store);
    

    // exclude
        // findSubsequences(str,output,index+1);
     // include   
    // output string me ch character ko include krdo
    // output.push_back(ch);
    // findSubsequences(str, output, index+1);

}

// Binary Search

int binarySearch(int arr[], int s, int e,int target){
    // base case
       if(s>e){
        // element not found
        return -1;
       }
    // Processing
    int mid = s+(e-s)/2;

      if(arr[mid]==target){
        return mid;
      }
    //   baki recursion sambhal lega
      if(arr[mid]<target){
            // right me jao
            s = mid+1;
            return binarySearch(arr,s,e,target);
      }else{
        // left me jao
          e=mid-1;
         return binarySearch(arr,s,e,target);
      }

    //  T.C.=> O(log(n));
}
 int main(){


    string str = "sushil";

    string output= "";

    int index = 0;
    vector<string>store;
    
    findSubsequences(str,output,index,store);
  
    //  printting of vector subsequence

     for(string ans: store){
          cout<<"->"<<ans<<endl;
     }


    // int arr[] = {10,20,30,40,50,60,70,80};
    // int size = 8;
    // int s = 0;
    // int e = size-1;
    // int target = 80;

    // int found = binarySearch(arr,s,e,target);

    // if(found != -1){
    //     cout<<"Target is found "<<found<<endl;
    // }else{
    //     cout<<"target is not found"<<endl;
    // }

      
    //   int arr[] = {10,20,30,40,50,60,70};
    //   int size = 0;
    //   int index = 1;

    //   bool isSorted = checkSorted(arr,size,index);

    //   if(isSorted){
    //     cout<<"Array is Sorted"<<endl;
    //   }else{
    //     cout<<"Array is not Sorted"<<endl;
    //   }


    return 0;
 }