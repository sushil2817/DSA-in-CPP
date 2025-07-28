#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part) != string::npos){
            // if insert loop, it means that part exists in string
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};

int main(){



return 0;
}