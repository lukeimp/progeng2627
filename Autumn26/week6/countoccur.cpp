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

int search(const std::vector<std::string> vin, std::string s){
    int count = 0;
    for(int i=0;i<vin.size();i++){
        if(s == vin[i]){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<std::string> words, text;
    std::ofstream output;
    std::ifstream inwords, intext;

    convert_file_vector(words, "words.txt");
    convert_file_vector(text, "text.txt");



    output.open("textcount.txt");
    for(int i=0; i<words.size();i++){
        output << words[i] << ": " << search(text, words[i]) << std::endl;
    }
    output.close();
}