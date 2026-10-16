#include <iostream>

int main(){
    int n, c=0, c2=0;

    std::cin >> n;

    while(c2 < n){
        c2++;

        while(c < n){
            c++;
            std::cout << "x";
        }
        c=0;
        std::cout << std::endl;
    }
}