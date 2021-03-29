#include <bits/stdc++.h>
using namespace std;

/* Algorithm

    we want to calculate the sum from index l to r of an array in O(1) after doing some
    preprossing in the array.

    e.g i/p arr = [1, 8, 3, 9, 6, 5, 4]
    we calculate a prefix_sum = [1, 9, 12, 21, 27, 32, 36]

    where prefix_sum[i] = sum of all elements from 0 -> i

    then, whenever we need to find sum of any substring we do, getsum(l,r)  = prefix_sum[r] - prefix_sum[l-1]

*/


int getsum(int prefix_sum[], int l, int r){
        if(l!=0) return prefix_sum[r] - prefix_sum[l-1];
        else return prefix_sum[r];
    }

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    
    for(int i = 1; i< n; i++) {
        prefix_sum[i] = prefix_sum[i-1]+arr[i];
    }


    cout << getsum(prefix_sum,0,3)<<"\n";
    cout << getsum(prefix_sum,2,5);
    return 0;
}