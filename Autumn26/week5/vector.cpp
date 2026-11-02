#include <iostream>
#include <vector>

int main(){
    int x, y, z;
    std::vector<int> v;
    std::cin >> x >> y >> z;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    
    std::cout << v[0] *(v[1] +v[2]) << std::endl;
}