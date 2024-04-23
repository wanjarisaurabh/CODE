//solution on geeksforgeek TC - n lon(n)
        sort(arr, arr+n);//sort the array
        int ans = arr[n-1] - arr[0];//check the ans before any changes
        int small = arr[0] + k;//0 index must be small 
        int high = arr[n-1] -k;//similarly for last index
        int mini =0, mazi = 0;
        for(int i = 0 ;i< n -1; i++){//dont check for n -1 if you do it the high shift 
            
            mini = min( small, arr[ i + 1]-k);//sililar for 0 index 
            mazi = max(high , arr[i] + k); //till n -2
            
        if(mini < 0)continue;//might have chances of begin negative
  
              
                ans = min(ans, mazi - mini);
                
        }
        
        return ans;    
}