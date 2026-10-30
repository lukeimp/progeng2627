#include <iostream>

void calc(double l, double w, double& a, double& p){
    a = l*w;
    p = 2*(l+w);
}

int main(){
    double l, w, a=0, p=0;

    std::cin >> l >> w;

    calc(l, w, a, p);

    std::cout << a << " " << p << std::endl;
}