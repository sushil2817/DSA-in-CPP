#include <iostream>
using namespace std;

void lastOccLTR(string &s, char x, int i, int &ans)
{
    // base case
    if (i >= s.size())
    {
        return;
    }
    // ek case solve krte hai
    if (s[i] == x)
    {
        ans = i;
    }
    lastOccLTR(s, x, i + 1, ans);
}


void lastOccRTL(string &s, char x, int i, int &ans){

// base case
if(i<0){
    return ;
}

// ek case solve krege
if(s[i] == x){
    ans = i;
    return;
}
lastOccRTL(s,x,i-1,ans);

}

int main()
{
    string s;
    cin >> s;
    char x;
    cin >> x;
    int ans = -1;
    int j = s.size()-1;
    // lastOccLTR(s, x, 0, ans);
    lastOccRTL(s, x, j, ans);

    cout << ans << endl;

    return 0;
}