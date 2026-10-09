#include <iostream>

int main(){
    double h, w, bmi;

    std::cout << "What is your height in centi-metres?" << std::endl;
    std::cin >> h;

    std::cout << "What is your weight in kilograms?" << std::endl;
    std::cin >> w;

    bmi = (w)/((h/100.0)*(h/100.0));

    std::cout << "Your BMI is " << bmi << std::endl;
}