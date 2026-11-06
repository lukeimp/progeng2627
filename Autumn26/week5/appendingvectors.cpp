#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout = vin1;
    for(int i=0; (vout.size()) < ((vin1.size())+(vin2.size())); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    std::vector<int> x = {1,7,3,4},y = {2,-2,19},z;

    append_vectors(x,y,z);

    for(int i=0; i<z.size();i++)
        std::cout << z[i] << std::endl;
}