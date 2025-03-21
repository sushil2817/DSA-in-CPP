#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i=j=k=0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            st.insert(A[i]);
            // cout<<A[i]<<" ";
            i++, j++, k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{

    int n1 = 6;
    int A[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5;
    int B[] = {6, 7, 20, 80, 100};
    int n3 = 8;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> ans = commonElements(A,B,C,n1,n2,n3);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}