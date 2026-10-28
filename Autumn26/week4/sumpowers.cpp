#include <iostream>

double mypow(double base, int exp){
    double result = 1;

    if(exp >= 0){
        for(int i = 0; i < exp; i++){
            result = result * base;
        }
    }
    else{
        for(int i = 0; i < -exp; i++){
            result = result * base;
        }
        result = 1.0 / result;
    }
    return result;
}

int main(){
    double x, sum = 0;
    int n;

    std::cin >> x >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + mypow(x, i);
    }
    std::cout << sum << std::endl;
}