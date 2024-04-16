class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>kans;
        int i = 0, j =0;
        while(i< n || j < m){
            if( i < n){
                kans.push_back(nums1[i]);
                i++;
            }
            if(j < m){
                kans.push_back(nums2[j]);
                j++;
            }
        }
        
        sort(kans.begin(), kans.end());

        int back = kans.size();
        int low =0, high = back -1;
double ans = 0.00;
        if(2 % back == 0){
            int mid = (low + high) / 2;
            int mid1 = mid + 1;

            ans = double(kans[mid]) + double(kans [mid1]);
            ans =double( ans) / double(2);
        }
        else {
            int bich = low + high ;
            ans = kans[bich];
        }
return ans;
        
           }
};