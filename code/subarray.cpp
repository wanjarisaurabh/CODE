#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[5] = {1, 2,  3, 4, 5};
    
    for(int i= 0; i < sizeof(arr)/sizeof(arr[0]); i++){

        for(int j = i; j <  sizeof(arr)/sizeof(arr[0]) ;j++){

        for(int k = i;  k <= j; k++ ){
            cout<<arr[k]<<"  ";


        }

       cout<<endl;

}




    }

    return 0;
}