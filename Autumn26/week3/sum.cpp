#include <iostream>

int main(){
    int n, i=1;
    double sum=0, mean=0;

    while((n != 0)){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
        
        sum = sum + n;
        mean = sum / i;
        i = i + 1;

        if(i != 2){
            std::cout << "The sum so far is: " << sum << std::endl;
            std::cout << "The average so far is: " << mean << std::endl;
        }
    }
}