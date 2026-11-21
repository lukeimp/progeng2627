#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::ifstream file(argv[1]);
    
    if (!file.is_open()) {
        std::cerr << "Error: could not open file: " << argv[1] << std::endl;
    }

    std::string line;
    while(getline(file,line)){
        std::cout << line << std::endl;
    }
}
