#include <iostream>

int main(){
    double height, weight, bmi;
    // variables

    std::cout << "What is your height in centi-metres?" << std::endl;
    std::cin >> height;

    std::cout << "What is your weight in kilograms?" << std::endl;
    std::cin >> weight;

    bmi = (weight)/((height/100.0)*(height/100.0));

    std::cout << "Your BMI is " << bmi << std::endl;
}