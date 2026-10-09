#include <iostream>

int main(){
    int w, l, p, a;
    
    std::cout << "What is the width of the rectangle?" << std::endl;
    std::cin >> w;

    std::cout << "What is the length of the rectangle?" << std::endl;
    std::cin >> l;

    p= 2*(w+l);
    a= w*l;

    std::cout << "The area is " << a << std::endl;
    std::cout << "The perimeter is " << p << std::endl;
}