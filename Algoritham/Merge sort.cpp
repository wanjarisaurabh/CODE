//jenny's lecture

merge(arr,lb,ub){

    if ( lb > ub){
        int min = (lb + ub )/2;
        merge(arr,lb,mid);
        merge(arr,mid+1,ub );

        mergethearray(arr,lb,mid,ub );
    }
}

//merging algorithm by striwer

void mergethearray(int array, int low, int mid, int high) {


    int temp[];
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}