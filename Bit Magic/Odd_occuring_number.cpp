#include <bits/stdc++.h>
using namespace std;

/* Intro , 
we have to find which number is odd occuring in list/array

we use XOR (^) operator to solve this problem.

properties of xor operator

1. x^0 = x
2. x^y = y^x
3. x^(y^z) = (x^y)^z

and xor of similar numbers is 0.

*/

int main(){
    int n;
    cout << "Enter length of array:\n";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n ; i ++) cin >> arr[i];

    int res = arr[0];
    for(int i = 1; i<n; i++) res ^= arr[i];

    cout << res; 

    return 0;
}