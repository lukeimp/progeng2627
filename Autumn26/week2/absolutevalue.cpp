#include <iostream>

int main(){
    double n, absv;
    std::cout << "What is your number?" << std::endl;
    std::cin >> n;
    
    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        // if not, its absolute value is the same as n
        // TODO: assign the value of n to absv
        absv = n;
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

}