#include <iostream>

int main(){
    int n, max = 0, i = 0;

    std::cin >> n;

    while(n != 1){
        if((n % 2) == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        if(n > max){
            max = n;
        }
        std::cout << n << std::endl;
        i = i + 1;
    }
    std::cout << "It took " << i << " steps to reach 1" << std::endl;
    std::cout << "The maximum number in the sequence was " << max << std::endl;


}