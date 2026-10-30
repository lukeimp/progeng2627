#include <iostream>

void divide(int a, int b, int& q, int& r){
    q = a / b;
    r = a - (q * b);
}

int main(){
    int a, b, q=0, r=0;

    std::cin >> a >> b;

    divide(a, b, q, r);

    std::cout << q << " " << r << std::endl;
}