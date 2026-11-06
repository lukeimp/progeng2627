#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i=0; i < vin.size() ;i++){
        if(n == vin[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> v= {0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7};
    int n;
    std::cin >> n;
    std::cout << search_vector(n,v);
}