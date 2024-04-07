#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


void printArr(int *arr, int size, int index){
    if(index >= size){
        return;
    }

     cout<<arr[index]<<" ";
     printArr(arr,size,index+1);
}


bool searchArr(int *arr, int size, int target, int index){
      if(index >= size){
        return false;
      }

      if(arr[index]==target){
        return true;
      }

      bool ans = searchArr(arr,size,target,index+1);

      return ans;
}

void findMin(int *arr, int size, int index, int &mini){
    if(index >= size){
        return;
    }
      mini = min(mini,arr[index]);
      findMin(arr, size, index+1,mini);
}

void solve(int *arr, int size, int index, vector<int> &ans){

    if(index >= size){
        return;
    }
    if((arr[index])%2 == 0){
        ans.push_back(arr[index]);
    }

    solve(arr,size,index+1,ans);
}

void doubleArr(int *arr, int size, int index ){

    if(index >= size){
        return;
    }

    // ans.push_back(2 * (arr[index]));
    arr[index] = 2* (arr[index]);
    doubleArr(arr, size, index+1);
}

void findMaxi(int *arr, int size, int index, int &maxi){

    if(index >= size){
        return;
    }
    maxi = max(maxi,arr[index]);
    findMaxi(arr,size,index+1,maxi);

}

int validArr(int *arr, int size, int index, int target){
    if(index >= size){
        return -1;
        // target nhi h matlab arr se bara h 
    }

    if(arr[index] == target){
        return index;
    }

    validArr(arr, size, index+1,target);
}


int allOccur(int *arr, int size, int index, int target){
    if(index >= size){
        return -1;
    }
    if(arr[index] == target){
        cout<<index<<" ";
    }
    allOccur(arr,size, index+1,target);
}

void printAllInt(int num, vector<int> &ans){
    if(num==0){
        return ;
    }
    int digit = num%10;
        num = num/10;
     printAllInt(num,ans);
     ans.push_back(digit);
}

void printNum(int *arr, int size, int index){
    if(index >= size){
        return ;
    }

    int digit = 0;
    digit = (digit*10) + arr[index];

    printNum(arr,size,index+1);
    cout<<digit;

}

int main(){
//    leet code 70  Climbing stairs
//    int climbStairs(int n) {
//          if(n==0){
//             return 1;
//          }
//          if(n==1){
//             return 1;
//          }
//          int ans = climbStairs(n-1) + climbStairs(n-2);
//          return ans;//Time limit exceed
//     }



//  int arr[] = {10,20,10,30,10};
//  int size = 5;
//  int index = 0; 
//  vector<int>newArr;
//  int target = 10;
//    int mini = INT_MAX;
  int arr[] = {4,2,1,5,8};
  int size = 5;
  int index = 0;
  
     
     
    printNum(arr, size, index);

// int maxi = INT_MIN;
 
//  int num = 4215;
//  vector<int>ans;
//       printAllInt(num,ans);

//       for(int num :ans){
//         cout<<num<<" ";
//       }


    //   allOccur(arr,size,index,target);
    // cout<<validArr(arr, size, index, target)<<" ";
   
    //  printArr(arr,size, index);
    // cout<<searchArr(arr,size,target,index);
//    findMin(arr,size,index, mini);

//    cout<<mini<<endl;

    // solve(arr, size, index, newArr);
    // doubleArr(arr, size, index);
    //  findMaxi(arr,size,index,maxi);
    //  cout<<maxi<<endl;

    // for(int num: arr){
    //     cout<<num<<" ";
    // }

    // for(int i=0;i<newArr.size();i++){
    //     cout<<newArr[i]<<" ";
    // }


    return 0;
}