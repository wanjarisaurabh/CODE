#include <vector>
using namespace std;
//optimaize -----
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m - 1;
        while (low <= high) {



        

            int mid =(low +high ) >> 1;

            int maxrow = 0;
            for(int i = 0 ; i < n ; i++){
                
        if(mat[i][mid] > mat[maxrow][mid]){
            maxrow = i;
        }

            }

            int left =(mid == 0) ? -1 : mat[maxrow][mid - 1];
int right = (mid == m - 1) ? -1 : mat[maxrow][mid + 1];
           
            
         
            if (mat[maxrow][mid] > left && mat[maxrow][mid] > right) {
                return {maxrow, mid};

            }
             else if (left > mat[maxrow][mid]) {
                high = mid - 1;
            }
             else {
                low = mid + 1;
            }


        }
        return {-1, -1};
    }
};
