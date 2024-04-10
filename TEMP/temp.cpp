#include<bits/stdc++.h>
using namespace std;

 bool isPalindrome(int x) {
        int sum =0;
int temp;

        while(x > 0){
            temp=x%10;
            sum=(sum*10)+temp ; 
            x /=10;  
        }
            temp = x% 10;
            sum = sum*10 +temp;
            x /= 10;
        }
        
       return (sum == x);   


 }

int main(){
    int x =121;

    if(isPalindrome(x)){

        cout<<"true"<<endl;

    }
    else{

    cout<<"pagal";
    }


    return 0;

}
