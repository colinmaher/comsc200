#include "angle.h"
#include <iostream>
#include <cmath>

using namespace std;

Angle convertGPS(double gps, int latlong){
    double tempMin, tempDeg, tempSec;
    tempMin = modf(gps, &tempDeg);
    tempMin = tempMin * 60;
    sec = modf(tempMin, &tempSec);
    tempSec = tempSec * 60;
}

int main(){
    Angle a(45,12,30,'S');
    a.print();
}