
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int end = n -1;//end possition 
        while(end >= 0 && num[end] % 2 == 0){//just chck that it is even then skip it 
            end--;
        }
        //othet wise return sub str 
        return num.substr(0 , end +1);
    }
};