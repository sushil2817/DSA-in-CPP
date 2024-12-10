#include <iostream>
#include <vector>
using namespace std;

int countSetBit(int n)
{

    int count = 0;
    while (n > 0)
    {
        int bit = n % 2;
        if (bit == 1)
        {
            count++;
        }
        cout<<bit<<endl;
        n = n / 2;
    }
    // return count;
}
// print all digit of an interger
void printDigit(int num)
{
    int digit;
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        cout << digit << " ";
    }
}

// with bitwise and
int setBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        if (bit == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int bruteForce(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int lsum = 0;
        int rsum = 0;

        for (int j = 0; j < i; j++)
        {
            lsum += nums[j];
        }
        for (int j = i + 1; j < nums.size(); j++)
        {
            rsum += nums[j];
        }
        if (lsum == rsum)
            return i;
    }
    return -1;
}

int bruteForceM2PrefixSum(vector<int>& nums){
    vector<int>lsum(nums.size(),0);
    vector<int>rsum(nums.size(),0);
    // cal lsum array
    for(int i=1;i<nums.size();i++){
        lsum[i] = lsum[i-1]+nums[i-1];
    }
    // cal rsum array
    for( int i = nums.size()- 2;i>=0;i--){
        rsum[i] = rsum[i+1]+nums[i+1]; 
    }
    // check krte hai

    for(int i=0;i<nums.size();i++){
        if(lsum[i]==rsum[i]) return i;
    }
     return -1; 
}

int main()
{

    // int arr[] = {1,7,3,6,5,6};
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(6);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl
    //      << "ans is : =  ";
    // cout << bruteForceM2PrefixSum(arr);
    //    int n ;
    //    cin>>n;
       int setBitCount = countSetBit(13);
    //    printDigit(n);

       cout<<setBitCount<<endl;

    // cout<<setBits(n);
   

//    int n = 6;
   
//     int count = 0;
//    while(n>0){
//     if((n&1)==1){
//       count++;
//     }
//     n =n>>1;
//    }
//    cout<<count;


    return 0;
}