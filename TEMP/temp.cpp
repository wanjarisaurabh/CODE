#include<bits/stdc++.h>
using namespace std;

int main(){

int arr1[4]={1,4,8,10};

int arr2[3]={2,3,9};

int j =3;

for (int i = 0; i< 7;i++) {

if(arr1[i]<=arr2[j]){


}

else { int temp = arr1[i];
    arr1[i]=arr2[j];
    arr2[j]=temp;
}


    
        j++;


        }

        //sort arr2 from inbult function
        sort(0,0+3);
        


int  n=(sizeof(arr1)/sizeof(arr1[0])+ sizeof(arr2) / sizeof(arr2 [0]));
   for (int i=0; i < n; i++){


   
     if(i < 4){

     
     cout << arr1[i] << " ";
   }
     else{

     cout << arr2[i-4]<<" ";

   }


}


      return 0;
}
