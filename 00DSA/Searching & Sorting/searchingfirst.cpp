// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(int arr[], int size, int target){
//     int s = 0;
//     int e = size-1;
//     int mid = s+(e-s)/2;
//     cout<<"this is mid "<<mid<<endl;
//     while(s<=e){
//         cout<<"this is mid inside function "<<mid<<endl;
//         if(target == arr[mid] ){
//             return mid;
//         }
//         if(target < arr[mid]){
//             e = mid-1;
//         }
//         if(target > arr[mid]){
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return -1;
// }


// int main() {

//     int arr[] = {2,4,6,8,10,12,16};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int target = 10;

//     int indexOfTarget = binarySearch(arr,size,target);

//     cout<<indexOfTarget;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

vector<int>v{1,2,3,4,5,6};

if(binary_search(v.begin(),v.end(),4)){
    cout<<"Found";
}else{
    cout<<"Not Found";
}
    return 0;
}