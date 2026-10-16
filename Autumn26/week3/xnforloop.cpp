#include <iostream>

int main(){
    int x=0, n=0, out=1;
    
    std::cin >> x >> n;

    for(int i = 0 ; i < n; i++ ){
        out = out * x;
    }
    
    std::cout << out << std::endl;
}