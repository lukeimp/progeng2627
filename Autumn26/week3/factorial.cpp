#include <iostream>

int main (){
    int n=0, out=1, multiple=0;

    std::cin >> n;
    multiple = n;
    out = n;

    for(int i=0; (i < n) && (multiple != 1); i++){
        multiple = multiple - 1;
        out = multiple * out;

    }
    if (out != 0){
        std::cout << out << std::endl;
    }
    else{
        std::cout << "1" << std::endl;
    }
}