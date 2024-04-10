//here we were doing with the help of binary search,
//it can be possible with "lower BOUnd " ans upper bound 


int firstoccurance(vector<int> &arr, int n, int k){
    int low = 0 , high = n - 1; first = -1;
    while (low <= high) {
        int mid = low  high /2;
        if(arr[mid] == k){
            fist = mid;
            high = mid - 1;

        }
        else if(arr[mid ] < k)   low = mid +  1;
        else high = mid - 1;

}

return first;
}

int lastoccurance(vector<int>&arr, int n , int k ){
    int low = 0 , high = n-1;
    int last = -1;
    while(low <= high){
        int mid = low + high / 2;
        if(arr[mid] == k ) {
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid]  < k ) low = mid + 1;
        else high = mid -1 ;
    }
    return last;
}


vector<int> firstanslast_occurance(vector<int> &arr, int n, int k ){
    int first = firstoccurance(arr, n , k);
    if(first == -1) return { -1, -1};
    int last = lastoccurance(arr, n ,k );
    return {first, last};

    
}

int main(){


    vector<int>ans = firstanslast_occurance(arr, n, k);

}