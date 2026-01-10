#include<iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    cout<<"End in first Occ "<<e<<endl;
    int mid = s+(e-s)/2;
    int ans  = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }else if(arr[mid] < key){
            // right
            s = mid+1;
        }else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
}
int LastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    cout<<"end in last Occ "<<e<<endl;
    int mid = s+(e-s)/2;
    int ans  = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }else if(arr[mid] < key){
            // right
            s = mid+1;
        }else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
}
int main(){

    int arr[] = {1,2,3,3,3,3,3,3,3,3,3,3,3,3,5};
    int size =  sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int ans = firstOcc(arr,size,3);
    int ans1 = LastOcc(arr,size,3);
    cout<<"first Occ of 3 is "<<ans<<endl;
    cout<<"last Occ of 3 is "<<ans1<<endl;
    cout<<"Total no of Occ "<<(ans1-ans+1)<<endl;
return 0;
}