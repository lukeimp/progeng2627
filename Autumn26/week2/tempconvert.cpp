#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;

    bool valid_unit = true;

    std::cin >> temp_in >> unit_in;

    if ((unit_in == "F") or (unit_in == "f")){
        temp_out = (temp_in - 32)* (5.0/9.0);
        unit_out = "C";
    }

    else if ((unit_in == "C") || (unit_in == "c")){
        temp_out = (temp_in * 1.8) + 32; 
        unit_out = "F";
    }

    else {
        valid_unit = false;
    }

    if (valid_unit){
            std::cout << temp_out << " " << unit_out << std::endl;
    }
    else {
        std::cout << "error, unit not recognised" << std::endl;
    }
}