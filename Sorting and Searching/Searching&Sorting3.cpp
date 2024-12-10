// find quotient using binary search

// #include<iostream>
// using namespace std;

// int getQuotient(int divisor,int dividend){
//       int s = 0;
//       int e = dividend;
//       int mid = s+(e-s)/2;
//       int ans = -1;

//       while(s <= e){
//          if(mid*divisor == dividend){
//             return mid;
//          }
         
//           if(mid*divisor < dividend){
//             // ans store
//               ans = mid;
//             // right me jao
//               s = mid+1;
//          }else {
//             // left
//             e = mid-1;
//          }
//          mid = s+(e-s)/2;
//       }

//       return ans;
//   T.C. = log(n) => n => dividend  
// }

// int main(){

//   int divisor = -8;
//   int dividend = 35;

//     int ans = getQuotient(abs(divisor),abs(dividend));

//     // now we need to decide k sign knosa lagaye +ve ya -ve


//     if((divisor>0 && dividend<0) ||(divisor<0 && dividend>0)){
//           ans = 0-ans;
//     }

//     cout<<"Final Ans.: "<<ans<<endl;

//     return 0;
// }




// Binary Search in nearlly sorted array

// #include<iostream>
// using namespace std;

// int searchNearlySorted(int arr[], int n, int target){
//     int s = 0;
//     int e = n-1;
//     int mid = s+ (e-s)/2;

//     while(s<=e){
//         if(mid-1>=0 && arr[mid-1]==target){
//             return mid-1;
//         }
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid+1<n && arr[mid+1]==target){
//             return mid+1;
//         }
         
//          if(target > arr[mid]){
//             s=mid+1;
//             // s=mid+2
//          }else{
//             e=mid-1;
//             // e=mid-2
//          }
//          mid = s+ (e-s)/2;
//     }

//     return -1;


//     // T.C. log(n) => n => size of array
// }

// int main(){

//     int arr[] = {20,10,30,50,40,60,70};
//     int n = 7;
//     int target = 40;
     
//      int targetIndex = searchNearlySorted(arr,n,target);

//       if(targetIndex == -1){
//         cout<<"Element not Found"<<endl;
//       }else{
//         cout<<"Element Found at Index: "<<targetIndex<<endl;
//       }

//     return 0;
// }


// find the odd Occurence
// 1) all elements are even no. of time occur
// 2) all repeatlly = pair repeat
// 3) ek bar me koii ek no. 2 se jayada bar nhi aa skta


#include<iostream>
using namespace std;
 
int findOddOccuringElemnts(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        // single element
        if(s == e){
            return s;
        }

        // mid check -> even or odd
        if(mid & 1){
            // mid&1 -> true -> odd number
              if(mid-1>=0 && arr[mid-1]==arr[mid]){
                  // right me jao
                   s=mid+1;
              }else{
                // left me jao
                e=mid-1;
              }
        }else{
            // even
            if(mid+1<n && arr[mid]==arr[mid+1]){
                // right me jao
                s=mid+2;
            }else{
                // ya to me right me hu 
                // ya me ans ke upr hu
                // that's why e = mid;kr rha hu e=mid-1 se ans lost ho skta h
                e=mid;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
      
      int arr[] = {10,10,2,2,3,3,5,5,6,6,7,7,10};
      int n=13;
      int ansIndex = findOddOccuringElemnts(arr,n);

      cout<<"Final Ans is: "<<arr[ansIndex]<<endl;


    return 0;
}



// four type of binary search questions

// 1) Binary Search Classic Questions
// 2) search Space wale questions
// 3) Predected Function wale questions
// 4) index pe logic wale questions