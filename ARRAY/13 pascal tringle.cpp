//for the first variation 


//where we just need to print the particular number 


int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (res);
}
//now for second varition, wherewe just need to print the particular line 
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (res);
}

//it can be donw with this but the TC BECOME N* R

//solution is in the copy 

//3 VARIATION 

//print the whole triangle
//also in copy 

//code for 3 


vectore <int> generaterow(int row ){


    long long ans =1;
    vector<int> ansrow;
    ansrow.push_back(1);
    for(int col = 1; col<row;col++){
        ans = ans * (row-col);
        ans=ans/col;
        ansrow.push_back((int)ans);
    }   
   return ansrow ;
    }

vector<vector<int>> passcaltriangle(int n){


    vector<vector<int>>ans;
    for(int i = 1;i<= n; i++){

        ans.push_back(generaterow(i));
        
    }
    
return ans;
}
 