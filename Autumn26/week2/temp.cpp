#include <iostream>

int main(){
    double celsius, fahrenheit;

    std::cout << "What is the temperature in degrees celsius?" << std::endl;
    std::cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    std::cout << "It is " << fahrenheit << " degrees fahrenehit" << std::endl;
}