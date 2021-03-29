/* 

--------------INTRODUCTION---------------------

Its an index in an array, in which the sum of elements present before it is
equal to the sum of elements present after it.

--------------Example--------------------------
arr = { 4,3,4}
here element 3 is equilibrium

arr = {4, 2, -2}
here 4 is equilibrium
 
--------------Algorithm------------------------

1. sum <- 0
2. for i <- 0 to n goto 3
3. sum <- sum + arr[i]
4. l_sum <- 0
5. for i <- 0 to n goto 6
6. if l_sum = sum-arr[i] then return true else goto 7
7. l_sum += arr[i]
8. sum -= arr[i] 

-----------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

bool isEqual(int arr[], int n){
    int sum = 0, l_sum = 0;
    for(int i = 0; i<n; i++) sum += arr[i];

    for(int i = 0; i<n ; i++){
        if(l_sum == sum-arr[i]) return true;
        l_sum += arr[i]; 
        sum -= arr[i];
    }
    return false;
}

int main(){
    int n;
    cout << "Enter the length of array:\
    n";
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++) cin >> arr[i];

    cout << isEqual(arr,n);
    return 0;
    
}
