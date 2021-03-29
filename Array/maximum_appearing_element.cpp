#include <bits/stdc++.h>
using namespace std;

/* 
In this we are given two lists 
L = { 1, 2, 3}
R = { 3, 5, 7}

we have to find the maximum appearing element. s.t. 
range is (L[i],R[i])

-------------Algorithm-------------------------

1. vector<int> arr[1000]       for arrays less than 1000 length, elements default value is 0
2. for i <- 0 to n goto 3
3. arr[L[i]]+= 1
4. arr[R[i]+1]-= 1
5. max <- arr[0]
6. res <- 0
7. for i <- 1 to 1000 goto8
8. arr[i] += arr[i-1]
9. if max<arr[i] then max = arr[i] and res = i
10. return i

*/

int maxOf(int L[], int R[], int n){
    vector<int> arr[1000];
    for(int i = 0; i <n ; i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int max = arr[0], res = 0;
    for(int i = 1; i< 1000 ; i++){
        arr[i] += arr[i-1];
        if (max<arr[i]){
            max = arr[i];
            res = i;
        }
    }
    return res;
}

int main(){
    int n;
    cout << "Enter size of array:\n";
    cin >> n;
    int L[n], R[n];
    cout << "Enter 1st array:\n";
    for(int i = 0; i< n; i++) cin >> L[i];
    cout << "Enter 2nd array:\n";
    for(int i = 0; i<n; i++) cin >> R[i];
    
    cout << maxOf(L,R,n);

    return 0;

}