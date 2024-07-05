#include<bits/stdc++.h>

using namespace std;
long long  myPow(long long  x, int n) {
  long long  ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  // if (n < 0) ans = (long long )(1.0) / (long long )(ans);
  return ans;
}

//both code for powe

int power(int x , int y){

  if(y == 0) {
    return 1;

  }


  int ans = power (x , y/2);
  ans*= ans;
if(y%2)ans*=x;
return ans;
}
  