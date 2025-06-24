#include<iostream>
using namespace std;

int findoddOccuringElement(int arr[], int n){
    int s =0 ;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        // single element
        if(s==e){
            return s;
        }
        // mid check -> even or odd

        if( mid & 1){// mid&1-> true -> odd number
            if( mid-1>=0 && arr[mid-1] == arr[mid]){
                // right me jao
                s = mid+1;
            }else {
                // left me jao
                e = mid-1;
            }
        }else{
            if(mid+1 < n && arr[mid] == arr[mid+1]){
                // right me jao
                s = mid+2;
            }else{
                // ya to main right part pr khada hu
                // ya to me ans ke upr khada hu
                // that's why e = mid krra hu
                e = mid;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main(){

    int arr[] = {10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = findoddOccuringElement(arr, n);

    cout<<"final ans is: "<<arr[ans]<<endl;

return 0;
}