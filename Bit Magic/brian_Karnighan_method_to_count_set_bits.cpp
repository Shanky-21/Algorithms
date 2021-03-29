#include <bits/stdc++.h>
using namespace std;

/* Introduction

This method is used to find number of set bits in a number.

What we do in this is, n = n&(n-1)
it offs one set bit.

suppose a bin number , n = b( 1 1 0 1 0 0)
then                 n-1 = b( 1 1 0 0 1 1)
when we take bitwise & of them, 

n&(n-1) will be equal to b(1 1 0 0 0 0 )

we do this till n>0

hence, we count the set bit in O(setbit_coutn)
*/

int main(){
    int n;
    cout << "Enter the number :\n";
    cin >> n;
    
    int res = 0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    cout << res;
}
