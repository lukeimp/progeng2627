#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){
    std::ifstream infile; 
    std::ofstream outfile;
    std::string inputfilename;
    std::string outputfilename;

    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;
    infile.open(inputfilename);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);

    }

    infile.close(); 

    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;

    outfile.open(outputfilename);
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i= (v.size() -1); i >= 0 ;i--){
        outfile << v[i] << std::endl;
    }
    outfile.close();
}