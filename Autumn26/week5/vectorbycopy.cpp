#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n, add;
    std::cout << "how many elements fo you want: " << std::endl;
    std::cin >> n;

    for(int i=0 ;i<n;i++){
        std::cout << "enter a number" << std::endl;
        std::cin >> add;
        v.push_back(add);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}