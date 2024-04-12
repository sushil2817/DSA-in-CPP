// #include<iostream>
// using namespace std;

// void merge(int arr[], int s, int e){
//     // Todo
//     int mid = (s+e)/2;
//      int lenLeft = mid-s+1;
//      int lenRight = e-mid;

//     //  create left and right array 
//     int *left = new int[lenLeft];
//     int *right = new int[lenRight];

//     // copy values form original array to left array
//     int  k = s;
//     // k-> starting index of left arr values in original array
//     for(int i=0;i<lenLeft;i++){
//         left[k] = arr[k];
//         k++;
//     }
      
//     //   copy values from original array to right array
//     k = mid+1;
//     for(int i=0;i<lenRight;i++){
//            right[k] = arr[k];
//            k++;
//     }

//     // actual merge logic here

//     // left array is already sorted
//     // right array is already sorted
//     int leftIndex = 0;
//     int rightIndex = 0;
//     // yahi pr galti hogi
//     int mainArrayIndex = s;

//     while(leftIndex < lenLeft && rightIndex < lenRight ){
//         if(left[leftIndex] < right[rightIndex]){
//             arr[mainArrayIndex] = left[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//         }else{
//             arr[mainArrayIndex] = right[rightIndex];
//             mainArrayIndex++;
//             rightIndex++;
//         }
//     }

//     // 2 more case
//     // 1 case -> left array khtm ho gya lekin right array abhi bhi bache h

//     // right array bacha hua h

//     while(rightIndex < lenRight){
//           arr[mainArrayIndex] = right[rightIndex];
//             mainArrayIndex++;
//             rightIndex++;
//     }
//     // 2 case -> right array khtm ho gya lekin left array me abhi bache h

//     while(leftIndex < lenLeft){
//             arr[mainArrayIndex] = left[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//     }


//    // 1 more step
//    delete[] left;
//    delete[] right;
// }


// void mergSort(int arr[], int s, int e){
//     // base case
//     if(s>e){
//         // invalid array
//         return;
//     }
//     if(s==e){
//         return ;
//     }

//     // break
//     int mid = (s+e)/2;
//     // s-> mid left array
//     // mid+1 -> e right array
//     //  recursion bhaiya ko bulao and 

//     // left and right array ko sort karwao
//     // recursion call for left array

//     mergSort(arr,s,mid);
//     // recursion call for right array
//     mergSort(arr,mid+1,e);

//     // merge 2 sorted array
//     merge(arr,s,e);
// }
//  int main(){

//      int arr[] = {2,1,6,9,4,5};
//      int size = 6;
//      int s = 0;
//      int e = size-1;

        
//       std::cout<<"Before Sorting : "<<endl;
//      for(int i=0;i<size;i++){
//         std:: cout<<arr[i]<<" ";
//      }
//      mergeSort(arr, s, e);
     
//      std::cout<<"after Sorting: "<<endl;

//      for(int i=0;i<size;i++){
//       std::cout<<arr[i]<<" ";
//      }


//     return 0;
//  }


#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    int lenLeft = mid-s+1;
    int lenRight = e-mid;

    // create left and right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    // copy values form origianl array to left array

    int k = s;
    // k->s strarting index of left array values in original arrays

    for(int i=0;i<lenLeft;++i){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    // k->mid+1 starting arr of right array ka
     for(int i=0; i<lenRight; ++i){
         right[i] = arr[k];
         k++;
     }

    //  actual merge logic here

    // left array is already sorted
    // right array is already sorted

     int leftIndex = 0;
     int rightIndex = 0;
    //  main arr ka index 
    // galti hogi
     int mainArrayIndex = s;

     
      while(leftIndex < lenLeft && rightIndex < lenRight ){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
      }


    //   2more case
    // 1 case -> left array exhaust but right array me element bache ho 
       while(rightIndex<lenRight){
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
       }
    // 2 case -> right array exhaust but left array me element bache ho

       while(leftIndex<lenLeft){
             arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
       }

    //    delete

    delete[] left;
    delete[] right;

}

void mergeSort(int arr[], int s, int e) {
	//base case
	if(s >= e) {
		return;
	}

	//break
	int mid = (s+e)/2;
	//recusive call for left array
	mergeSort(arr,s, mid);
	//recusive call for right array
	mergeSort(arr, mid+1, e);
	//merge 2 sorted arrays
	merge(arr, s, e);
}

int main(){
 
    
     int arr[] = {2,1,6,9,4,5};
     int size = 6;
     int s = 0;
     int e = size-1 ;


     cout<<"Before merge sort"<<endl;

     for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     
     mergeSort(arr,s,e);

     cout<<"After merge sort"<<endl;

     for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
     }
     cout<<endl;


    return 0;
}