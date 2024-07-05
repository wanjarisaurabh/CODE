

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

            // Check if the mapping for s[i] already exists
            if (checkmap.find(original) != checkmap.end()) {
                if (checkmap[original] != replacement) {
                    return false;
                }
            } else {
                // Check if the mapping for t[i] already exists
                if (checkmap.find(t[i]) != checkmap.end()) {
                    return false;
                }
                // Add the mapping for s[i]
                checkmap[original] = replacement;
            }
        }
        return true;
    }
};
