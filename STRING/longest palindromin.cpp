class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>small(26, 0);
        vector<int>capital(26,0);
        //storing the count of words
        for(int i = 0 ; i < s.size(); i++){
            if(s[i]>='a'){
                small[s[i]-'a']++;
            }
            else 
         capital[s[i ] - 'A']++;


        }

        bool odd = 0;
        int count = 0; 

        for(int i = 0 ; i< 26; i++){


            if( small[i] % 2 == 0){
                count += small[i];
            }
            else{
            count += small[i] -1;
            odd = 1;
        }

            
             if( capital[i] % 2 == 0){
                count += capital[i];
            }
            else{
            count+= capital[i] -1;
            odd = 1;
        }

        }


return count+odd;


    }
};