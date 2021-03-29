#include <bits/stdc++.h>
using namespace std;

/* intro - 
  check if the kth bit of a number is set - 1 or not 0.
  here, we generate a number whose Kth bit is set, i.e 1 
  then we take bitwise & from that number, if the result is
  0, then Kth bit isn't set, else set.

  Algorithm

  1. genNum  <- 1<<k  
  2. res <- genNum & x
  3. if res = 0 then not set else set.

  */

 int main(){
     int n,k;

     cout << "Enter your number:\n";
     cin >> n;
     cout << "Enter K :\n";
     cin >> k;

     int genNum = 1<<(k-1);

     int res = genNum & n;

     if (res == 1) cout << "Set\n";
     else cout << "Not Set\n";

     return 0;
 }