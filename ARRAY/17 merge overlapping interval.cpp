
//ayushi didi walmart girls

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==0){
        }      
        
        sort(intervals.begin(), intervals.end(),[](vector<int> &a, vector<int> &b){
            return a[0] < b[0];
        });
        vector<int> curr=intervals[0];//curr ke under hm first interval dal rehe hai 
        
        for(int i=1;i<intervals.size();i++){
            if(curr[1]<intervals[i][0]){//current ka end and  next interval ki start 
                res.push_back(curr);
                curr=intervals[i];
            }else{
                curr[1]=max(curr[1], intervals[i][1]);//interval ke end ki valur ko comapare kar rahe hai 
            }
        }
        
        res.push_back(curr);
        return res;
    }
};


//strivers 
//brute force -- 2n + nlon(n)
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    int n = arr.size(); // size of the array

    //sort the given intervals:
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) { // select an interval:
        int start = arr[i][0];
        int end = arr[i][1];

        //Skip all the merged intervals:
        if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }

        //check the rest of the intervals:
        for (int j = i + 1; j < n; j++) {
            if (arr[j][0] <= end) {
                end = max(end, arr[j][1]);
            }
            else {
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}


//optimal -- log(n)+n



#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    int n = arr.size(); // size of the array

    //sort the given intervals:
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans; 

    for (int i = 0; i < n; i++) {
        // if the current interval does not
        // lie in the last interval: 
        if (ans.empty() || arr[i][0] > ans.back()[1]) {//if it is first then push it as it is 
            ans.push_back(arr[i]);
        }
        // if the current interval
        // lies in the last interval:
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}



