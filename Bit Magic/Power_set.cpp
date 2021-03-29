#include <bits/stdc++.h>
using namespace std;

/* Intro-

we have to create power set of a string using bitwise,

Algorithm

1. count <- 1<<n                          generating a 2^k number
2. for i <- 0 to count goto 3
3. for j <- 0 to n goto 4
4. if i&(1<<j)>0 then print str[j]
5. print newlline

*/

int main(){
    string s;
    cout << "Enter your string\n";
    cin >> s;

    int count = 1<<s.length();
    cout << count;
    for(int i = 0; i<count; i++){
        for(int j = 0; j<s.length(); j++){
            if(i&(1<<j)>0) cout << s[j];
        }
        cout << "\n";
    }
    return 0;
}   