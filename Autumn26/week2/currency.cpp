#include <iostream>

int main(){
    double gbp, eur, conversion;

    std::cout << "How much money do you have in GBP?" << std::endl;
    std::cin >> gbp;

    std::cout << "What is the conversion rate from GBP to EUR?" << std::endl;
    std::cin >> conversion;

    eur= (gbp) * (conversion);

    std::cout << "You have EUR " << eur << std::endl;
}