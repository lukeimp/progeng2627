#include <iostream>

bool leap_year(int year){
    bool ly;
    if((year % 4) == 0){
        if((year % 100) == 0){
            if((year % 400) == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
    }
    else{
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int d1, m1, y1, d2, m2, y2;
    
    std::cin >> d1 >> m1 >> y1;
    std::cin >> d2 >> m2 >> y2;
}