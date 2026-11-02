#include <iostream>
#include <vector>

int main(){
    int n, add, t;
    std::vector<int> v;

    std::cin >> n;
    
    for(int i=0; i<n ; i++){
        std::cin >> add;
        v.push_back(add);
    }

    std::cin >> t;
    for(int i=0 ; i<v.size() ;i++){
        if(v.at(i) < t){
            std::cout << v.at(i) << std::endl;
        }
    }
}