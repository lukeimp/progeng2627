#include <iostream>
#include <string>

int main(){
    int max = 1000, min = 0, guess;
    bool found = false;
    std::string answer;

    std::cout << "Think of a number between 0 and 1000" << std::endl;

    while(found != true){
        guess = ((max + min) / 2);

        std::cout << "My guess is " << guess << std::endl;
        std::cin >> answer;

        if(answer == "="){
            found = true;
            std::cout << "I got it" << std::endl;
        }
        else if(answer == "<"){
            max = guess;
        }
        else if(answer == ">"){
            min = guess;
        }

    }

}