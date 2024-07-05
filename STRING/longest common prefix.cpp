/* Also there is a brute forece apporch 
travers through evey element and use a hashmap */

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {//here i change name of vector for easy understanding 
        string ans="";
        sort(v.begin(),v.end());//sorting it according to alphabet
        int n=v.size();
        string first=v[0],last=v[n-1];//take 1st and last string 
        for(int i=0;i<min(first.size(),last.size());i++){//compare both 1 and last 
            if(first[i]!=last[i]){
                return ans;//if the aphabet is not similar then return it 
            }
            ans+=first[i];//otherwise add to ans:
        }
        return ans;
    }
};