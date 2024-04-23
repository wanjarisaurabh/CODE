#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        // Create an unordered_map to store character mappings
        unordered_map<char, char> checkmap;

        for (int i = 0; i < s.length(); i++) {
            char original = s[i];
            char replacement = t[i];

            if(checkmap.find(s[i]) != checkmap.end()){
                
                int check1 = checkmap.find(s[i]);
                if(checkmap[check1] != replacement)return false;
            }
            if(checkmap.find(t[i]) != checkmap.end()){
                int check2 = checkmap.find(t[i]);
                if(checkmap(check2) != original)return false;
            }
            
            checkmap[original] = replacement;

        }
        return true;
    }
};
