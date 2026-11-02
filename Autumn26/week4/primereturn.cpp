#include <iostream>

int smallest_factor(int n){
    if(n >= 2){
        for(int i=2; i*i <= n; i++){
            if((n % i) == 0){
                return i;
            }
        }
        return n;
    }
    return 0;
    
}


int main(){
    int x, y;
    
    std::cin >> x >> y;

    for(int i = x; i <= y; i++){
        if(i >= 2 && smallest_factor(i) == i){
            std::cout << i << std::endl;
        }
    }
}