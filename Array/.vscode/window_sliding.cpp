#include <bits/stdc++.h>
using namespace std;

/* algorithm
   
   we have an array of 'n' elements,
   we want to find the max_sum of 'k' consecutive elements.

   1. arr <- n
   2. for(i<-0 ; i < k ; i++ ) do curr_sum <- curr_sum + arr[i]
   3. max_sum = curr_sum
   4. for(i<-k , i < n; i++) do curr_sum <- curr_sum - arr[i-k] + arr[i] 
   5. if max_sum < curr_sum then max_sum <- curr_sum
   6. print max_sum 

*/


int main(){
    int n,k, max_sum, curr_sum = 0;
    cout << "Enter Size of Array: \n";
    cin >> n;
    cout << "Enter K : \t";
    cin>> k;
    
    vector<int> a(n);
    cout << "Enter values: \n";
    for(int i = 0; i<n ; i++) cin >> a[i];

    for(int j = 0; j<k; j++){
        curr_sum =  curr_sum + a[j];
    }

    max_sum = curr_sum;

    for(int i = k; i<n; i++){
        curr_sum += a[i]-a[i-k];
        if(max_sum<curr_sum) max_sum = curr_sum;
    }

    cout<<max_sum;
    return 0;

}