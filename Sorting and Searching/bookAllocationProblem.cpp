// #include <iostream>
// using namespace std;

// bool isPossibleSoln(int A[], int N, int M, int sol)
// {
//     int pageSum = 0;
//     int c = 1;
//     for (int i = 0; i < N; i++)
//     {
//         if (A[i] > sol)
//         {
//             return false;
//         }
//         if (pageSum + A[i] > sol)
//         {
//             c++;
//             //  pageSum = 0;
//             //  pageSum += A[i]
//             pageSum = A[i];
//             if (c > M)
//             {
//                 return false;
//             }
//         }
//         else
//         {
//             pageSum += A[i];
//         }
//     }
//     return true;
// }
// // Function to find minimum number of pages.
// int findPages(int A[], int N, int M)
// {
//     // code here
//     if (M > N)
//         return -1;
//     int start = 0;
//     int end = accumulate(A, A + N, 0);
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = (start + end) >> 1;
//         if (isPossibleSoln(A, N, M, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int x = 124;

//     return 0;
// }

#include <iostream>
using namespace std;

bool isPossibleSoln(int A[], int N, int M, int sol)
{
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > sol)
        {
            return false;
        }
        else if (pageSum + A[i] > sol)
        {
            c++;
            pageSum = A[i];
            if (c > M)
            {
                return false;
            }
        }
        else
        {
            pageSum += A[i];
        }
    }
    return true;
}

// A[] no. of pages
// N no. of books
// M no. of students
int findPage(int A[], int N, int M)
{

    if (M > N)
        return -1;

    int start = 0;
    int end = accumulate(A, A - N, 0);

    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) << 1;
        if (isPossibleSoln(A, N, M, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}