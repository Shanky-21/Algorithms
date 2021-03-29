#include <iostream>
#include <vector>

int main(){
    int k,n;
    
    std::cout << "Enter the Size of array :";
    std::cin >> n;
    
    vector<int> a;

    for(int i = 0; i < n; i ++){
        std::cin>>;
    }

    for(int i = 0 ; i< n ; i++) std::cout<<a[i];
    return 0;

}