#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i=0; i< vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> x = {0,1,10,2,7,2,7,99,5,3,2,7,9,9,4,2,4,7,899,6,4,2,7},y;
    int t;
    std::cin >> t;
    filter_v(x,t,y);
    
    for(int i=0; i<y.size();i++)
        std::cout << y[i] << std::endl;
}