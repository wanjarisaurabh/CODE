#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        string sample = s + s;
        return s.size() == goal.size() && sample.find(goal) != string::npos;//if the string is not found the we get a value equa to (string :: npos)
    }
};
