#include <bits/stdc++.h>

//Counter ClockWise Rotation

/* 
I/p arr[] = {5, 8, 10, 12, 15}
d = 2

O/p arr[] = {10, 12, 15, 5, 8}

n - size of array, d = rotation

k = n, i = 0;
while(k--){
    r = i-d;
    if (r<0){
        r+ = n;
        temp = arr[r];
        arr[r] = arr[i];
        arr[i] = temp;
        i = r;
    }
}

*/

vector<int> rotate( vector<int> arr, i = 0, r , temp)
{
    if (index > n) return(arr);
    r = i-d;
    if (r<0)
}
