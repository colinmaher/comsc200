// File: degree.cpp
// Name: Colin Maher
// DVC ID: 1516739
// IDE:  Cloud 9
//this file prompts the user for a latitude and a longitude and creates
//2 angle classes to store and convert the lat/long to DMS  
#include "angle.h"
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double lat = 0, lon = 0;
    
    cout << "   Enter GPS coordinates:";
    do{
        cout<< "\n         Latitude (+/- 0-90.00): ";
        cin >> lat;
        if(lat < -90.0 || lat > 90.0){
            cout << "   Please enter a latitude between -90.00 and 90.00.";
        }
    }while(lat < -90.0 || lat > 90.0);
    
    do{
        cout << "\n         Longitude (+/- 0-180.00): ";
        cin >> lon;
        if(lon < -180.0 || lon > 180.0){
            cout << "   Please enter a latitude between -180.00 and 180.00.";
        }
    }while(lon < -180.0 || lon > 180.0);
    
    
    Angle a(lat, true);
    Angle b(lon, false);
    a.convertToDMS();
    b.convertToDMS();
    
    cout << "   Converted from GPS to DMS, " << lat << ", " << lon << " is:\n         ";
    a.print();
    cout << ", ";
    b.print();
}