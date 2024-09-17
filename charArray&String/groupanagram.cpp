// 49

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
   vector<vector<string>> groupAnagrams(vector<string> &strs)
   {
      map<string, vector<string>> mp;

      for (auto str : strs)
      {
         string s = str;
         sort(s.begin(), s.end());
         mp[s].push_back(str);
      }

      vector<vector<string>> ans;

      for (auto it = mp.begin(); it != mp.end(); it++)
      {
         ans.push_back(it->second);
      }
      return ans;
   }
};

int main()
{
   // t.c. O(n klogk)
   // s.c. O(nk)

   return 0;
}