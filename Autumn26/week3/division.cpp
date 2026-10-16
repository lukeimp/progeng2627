#include <iostream>

int main(){
    int a=0, b=0, q=0, r;

    std::cin >> a >> b;
    
    
    while((a > b) || (a==b)){
        a = a - b;
        q = q + 1;
    }

    std::cout << q << " remainder " << a << std::endl;
}