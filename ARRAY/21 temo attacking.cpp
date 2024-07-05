//do with pen and copy 
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeseries, int duration) {
        int total = 0;
        for(int i = 0; i< timeseries.size()-1; i++){
            total += min(timeseries[i + 1] - timeseries [ i] , duration);


        }

        total = total + duration;//since we don't count last one :
return total;
    }
};