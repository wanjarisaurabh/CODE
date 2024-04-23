
#include<bits/stdc++.h>
using namespace std;

 bool rotateString(string s, string goal) {
        int m = s.size();
        int count =0;
        int n = goal.size();
        if(n != m)return false;
        for(int i =0 ; i< n-1 ; i++){
            if(goal[i] > goal[i+1]){
                count++;
                cout<<count<<"   "<<goal[i]<<endl;
            }

        }

        
        if(count > 1){
            return false;
        }

        if(count == 1){
            if(goal[n-1] > goal[0])return false;

            if(goal[n-1] < goal[0])return true;
            

        }
        return true;

    }

    int main(){
        string s = "abcde";
        string goal = "cdeab";

        cout<<rotateString(s,goal); 
        return 0;

    }