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
    int x = 0, n = 0;
    double sum = 0;
    std::cout << "What is the limit and power? " << std::endl;
    std::cin >> x >> n;
    if(n >= 0){
        for(int i = 0; i <= x; i++){
            sum = sum + mypow(i, n);
        }
    }
    else{
        for(int i = 1; i <= x; i++){
            sum = sum + mypow(i, n);
        }
    }
    std::cout << "Sum: " << sum << std::endl;
}