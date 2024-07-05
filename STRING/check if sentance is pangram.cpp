class Solution {
public:
    bool checkIfPangram(string sentance) {
        vector<int>ans(26,0);
        for(int i =0; i < sentance.size(); i++){
            ans[sentance[i] -'a'] = 1;
        }
        int j =0;
        while(j<26){

            if(ans[j] == 0){
                return false;
            }
            j++;
        }
        return true;
    }
};