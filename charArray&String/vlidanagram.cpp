// 242 leetcode anagram

// brute force

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());


      if(s==t){
        return true;
      }
    

    return false;





// 918
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0;int h = s.size()-1;
        while(l<h){
            if(isalpha(s[l])&& isalpha(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }else if(!isalpha(s[l])){
                l++;
            }else{
                // s[h] non alpha
                h--;
            }
        }
        return s;
    }
};


