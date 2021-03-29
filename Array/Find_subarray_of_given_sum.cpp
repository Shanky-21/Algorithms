#include <bits/stdc++.h>
using namespace std;

/* Algorithm - 

   Works only for non-negative numbers
    
   I want to get that whether the sum of a substring is equal to given sum or not.

   1. arr <- array 
   2. sum <- sum
   3. cur_sum <- arr[0]
   4. s<- 0
   4. for(i = 1; i<n; i++){ 
   5. while( curr_sum > sum and s<n-1){
       curr_sum += -arr[s]; s++;
   }
   6. if curr_sum == sum then return true
   7. if e<n then curr_sum += arr[i]
   }
   8. return (curr_sum == sum)

*/

bool isSubSum( int arr[], int n , int sum){
    int curr_sum = arr[0], s = 0;
    for(int i = 1; i<n ; i++){
        //clean the previous window
        while(curr_sum > sum && s<i-1){
            curr_sum -= arr[s]; s++;
        }
        if (curr_sum == sum) return true;
        if (i<n) curr_sum += arr[i];
    }
    return (curr_sum == sum);
}

int main(){
    int n,sum;
    cout << "Enter length of Array: \n";
    cin >> n;
    cout << "Enter sum \n";
    cin >> sum;
    int arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];
    cout << "\n"<< isSubSum(arr,n,sum);
    return 0;
}
