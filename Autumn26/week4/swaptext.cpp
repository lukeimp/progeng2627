#include <iostream>
#include <string>

void swap(std::string& s1, std::string& s2){
    std::string tmp;
    tmp = s1;
    s1=s2;
    s2=tmp;
}
int main(){
    std::string s1, s2;

    std::cout << "Please enter two strings" << std::endl;
    std::cin >> s1 >> s2;

    std::cout << "You entered:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    swap(s1, s2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
}