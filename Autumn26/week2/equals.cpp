#include <iostream>
int main(){
    double a, b, c;

    a=1;
    b=2;
    c=a+b;

    std::cout << c << std::endl;

    a=2;

    std::cout << c << std::endl;
    // 3

    c=a+b;

    std::cout << c << std::endl;
    // 4
}