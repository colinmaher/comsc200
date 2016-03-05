#include <iostream>
#include "car.h"
using namespace std;

int main(){
    Car c(2015, "Tesla Model S");
    c.print();
    for(unsigned int i = 0; i < 5; i++){
        c.accelerate();
    }
    for(unsigned int i = 0; i < 5; i++){
        c.brake();
    }
}