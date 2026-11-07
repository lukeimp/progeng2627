#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void convert_file_vector(std::vector<std::string>& vout, std::string filename){
    std::string tmp;
    std::ifstream file;

    file.open(filename);
    while(file >> tmp){
        vout.push_back(tmp);
    }
    file.close();
}

int search(std::vector<std::string>& vin, std::string s){
    for(int i=0;i<vin.size();i++){
        if(s == vin[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector<std::string> advert, v1, vword, vmean;
    std::ofstream output;
    std::ifstream advertfile, translatorfile;

    convert_file_vector(advert, "advert.txt");
    convert_file_vector(v1, "realmean.txt");

    for(int i=0; i < v1.size();i=i+2){
        vword.push_back(v1[i]);
        vmean.push_back(v1[(i+1)]);
    }

    for(int i=0; i < advert.size(); i++){
        int j; 
        
        j = search(vword, advert[i]);
        if(j != -1){
            advert[i] = vmean[j];
        }
    }

    output.open("output.txt");
    for(int i=0; i < advert.size(); i++){
        output << advert[i] << " ";
    }
    output.close();
}