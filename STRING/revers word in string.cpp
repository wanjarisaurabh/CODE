/* itereate ovaer the string and check 
if there are charactere then put into temp 
if space then skip it 
now check if temp size is temp > 0 or not -- leading space might be therir 
if ans size is == 0 push it 
otherwise append with space in return order -- means  */


class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.size(), i =0;
        while(i < n){
            string temp = "";
            while(s[i] == ' '&& i < n){
                i++;
            }

            while(s[i] != ' ' && i< n){
                temp += s[i];
                i++;
            }

            if(temp.size() > 0){
                if(ans.size() == 0){
                    ans = temp;
                }
                else 
                ans = temp+' '+ans;
            }

        }
        return ans;
    }
};