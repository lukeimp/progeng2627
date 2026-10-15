#include <iostream>

int main (){
    int i=0, n=0, j=0, x=0;
    double acc=1, total=0;

    std::cin >> x >> n;

    while(i < n){
        j=0;
        total=0;
        while(j < x){
            total = total + acc;
            j=j+1;
        }
        acc=total;
        i=i+1;
    }

    std::cout << x << "^" << n << " = " << acc << std::endl;
}