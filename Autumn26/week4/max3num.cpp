#include <iostream>
#include <cmath>

int max_num(int x, int y, int z){
    int max = x;

    if(max < y){
        max = y;
    }
    if(max < z){
        max = z;
    }
    return max;
}
int main(){
    int a, b, c;

    std::cin >> a >> b >> c;
    std::cout << max_num(a, b, c) << std::endl;
}