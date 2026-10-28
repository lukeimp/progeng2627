#include <iostream>
#include <cmath>

int max_num(int x, int y){
    int max = 0;

    if(x>y){
        max = x;
    }
    else{
        max = y;
    }

    return max;
}
int main(){
    int a, b;

    std::cin >> a >> b;
    std::cout << max_num(a, b) << std::endl;
}