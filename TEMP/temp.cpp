#include<bits/stdc++.h>
using namespace std;

int getsum (vector<int>& a, long long k){
    int n = a.size();
int len  = 0;

for (int i = 0; i< n ; i++){
    for (int j = i; j<n; j ++){

        long long sum = 0;
        for (int k = i; k <= j; k ++){

            sum += a[k];

        }
        if (sum == k){
            len = max(len , j- i + 1);
        }
    }
}
return len;


}

int main (){

    vector<int > a = { 2, 3,5, 1, 9};
    long long k = 10;
    int len = getsum(a , k );
    cout <<"nght of longest subarray is" <<"   "<<len <<endl;

return 0; 

}


