#include <bits/stdc++.h>
using namespace std;

/*  Intro 

we have to check whether a number is power of two or not.

now, let us think
x = 4                   bin(100)
now, x-1 = 3            bin(011)

when we take bitwise & of x&(x-1) we get 0 if x is power of 2 else we get something

therefore our logic is based on it, but, this doesn't work when x is 0, we have to 
define it explicityly.

*/

int main(){
    int x;
    cout << "Enter x:\n";
    cin >> x;

    if (x && !(x&(x-1))) cout << "TRUE\n";
    else if (!x)cout << "True\n";
    else cout << "False\n";

    return 0;
}