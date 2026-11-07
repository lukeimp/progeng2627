#include <iostream>
#include <vector>
#include <string>
#include <fstream>

bool search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0 ; i < vin.size(); i++){
        if(s == vin[i]){
            return true;
        }
    }
    return false;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i < vin1.size(); i++){
        if(search_vector(vin1[i],vin2)){
            vout.push_back(vin1[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout = vin1;
    for(int i=0; i<vin2.size();i++){
        if(!search_vector(vin2[i],vout)){
            vout.push_back(vin2[i]);
        }
    }
}

int main(){
    std::string inputfilename1, inputfilename2, tmp;
    std::ifstream infile1, infile2;
    std::ofstream unionfile, interfile;
    std::vector<std::string> unionv, interv, v1, v2;

    std::cout << "What is the name of the first input file?" << std::endl;
    std::cin >> inputfilename1;
    std::cout << "What is the name of the second input file?" << std::endl;
    std::cin >> inputfilename2;

    infile1.open(inputfilename1);
    if(infile1.is_open()){
        while(infile1 >> tmp){
            v1.push_back(tmp);
        }
        infile1.close();
    }
    else{
        std::cout << "error opening file" << std::endl;
    }

    infile2.open(inputfilename2);
    if(infile2.is_open()){
        while(infile2 >> tmp){
            v2.push_back(tmp);
        }
        infile2.close();
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
    union_vector(v1,v2,unionv);
    intersection_vector(v1,v2,interv);

    unionfile.open("union.txt");
    if(unionfile.is_open()){
        for(int i=0; i<unionv.size() ;i++){
            unionfile << unionv[i] << std::endl;
        }
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
    unionfile.close();

    interfile.open("intersection.txt");
    if(interfile.is_open()){
        for(int i=0; i<interv.size() ;i++){
            interfile << interv[i] << std::endl;
        }
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
    interfile.close();


}