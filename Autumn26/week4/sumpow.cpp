#include <iostream>
#include <cmath>

double sigma(int base, int exponent){
    int sum;
    sum = base * ( 1 - std::pow(base,exponent) ) / ( 1 - base );
    return sum;
}

int main(){
    int x, n;
    std::cin >> x >> n;
    std::cout << x << " to the power of " << n << " is " << sigma(x, n) << std::endl;
}