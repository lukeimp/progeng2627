#include <iostream>

int main(){
    int n, c=1, c2=1;

    std::cin >> n;

    while(c2 < (n+1)){

        while(c < (n+1)){
            
            
            std::cout << (c * c2) << "\t";
            c++;
        }
        c=1;
        std::cout << std::endl;
        c2++;
    }
}