#include <bits/stdc++.h>

//Algorithm

/*
int low = 0, high = n-1
while(low<high)
{
    swap(arr[low],arr[high]);
    low++;
    high--;
}


//Brute-force

/*
int main(){
    int a[5] = { 1, 2, 3, 10, 4};
    int b[5];
    std::cout << "Previous\t";
    for(int i = 5; i>0; i--){
        b[5-i] = a[i-1];
        std::cout << a[5-i] << "\t";          
    }
    std::cout << "\nAfter\t";
    for(int i = 0; i<5; i++)
    {
        a[i] = b[i];
        std::cout << a[i] << "\t";

    }

    return 0;
}
*/

//Recursive Approach - inplace_reversing

vector<int> rev(vector<int> n, i = 0){
    if (i>n.size()/2) return n;
    int temp = n[n.size()-1-i];                  //O(n)
    n[n.size()-1-i] = n[i];
    n[i] = temp;
    rev(n,++i);
}

//Without Recursion or loop

while(i<= n.size()/2){
    int temp = n[n.size()-1-i];
    n[n.size()-1-i] = n[i];                         //O(n)
    n[i] = temp;
    i++;
}
