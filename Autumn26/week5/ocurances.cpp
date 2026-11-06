#include <iostream>
#include <vector>

int how_many(std::vector<int> x, int t, std::vector<int>& indices){
    int total =0;
    for(int i=0; i< x.size();i++){
        if(t == x[i]){
            total++;
            indices.push_back(i);
        }
    }
    return total;
}

int main(){
    int n, add, s;
    std::vector<int> v, indices;

    std::cout << "please enter n:" << std::endl;
    std::cin >> n;
    for(int i=0; i < n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> add;
        v.push_back(add);
    }
    std::cout << "please enter s: " << std::endl;
    std::cin >> s;
    std::cout << "there are " << how_many(v,s,indices) << " occurences of " << s << " at indices:" << std::endl;
    for(int i=0; i < indices.size() ;i++){
        std::cout << indices[i] << std::endl;
    }
}