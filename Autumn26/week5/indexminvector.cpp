#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int min = 0;
    std::vector<double> ref;
    if(vin != ref){
        for(int i=1; i<vin.size();i++){
            if(vin[min] > vin[i]){
                min = i;
            }
        }
        return min;
    }
    else{
        return -1;
    }
}



int main(){

    std::vector<double> v = {0, 5, 10, 1, 15, 250};
    if(min_vector_element(v) == 0){
        std::cout << "1" << std::endl;
    }

    std::vector<double> w = {};
    if(min_vector_element(w) == -1){
        std::cout << "1" << std::endl;
    }

    std::vector<double> x = {100};
    if(min_vector_element(x) == 0){
        std::cout << "1" << std::endl;
    }

    std::vector<double> y = {6, 10, 3};
    if(min_vector_element(y) == 2){
        std::cout << "1" << std::endl;
    }

}