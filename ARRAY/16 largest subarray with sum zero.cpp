




#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a) {
    int maxLen = 0;

    //map store the prifix sum and idex  of element
    unordered_map<int, int> sumIndexMap;
    int sum = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
//if we add all element and find the 0 the return i + 1
        if (sum == 0) {
            maxLen = i + 1;
//if not then  check the difference between current index and stored index in map
        } else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        } else { 
            //store the idex  of element in map with its prifix sum
            //if any number is repet we will not update it
            //we only add unique
            sumIndexMap[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;

    return 0;
}