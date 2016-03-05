// File: angle.h
// Name: Colin Maher
// DVC ID: 1516739
// IDE:  Cloud 9
//This file defines the angle class and includes functionality
//to convert from a lat or long value to a DMS value
#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>
#include <iomanip> //setprecision
#include <cmath> //modf

class Angle{
private:
    double seconds, l, degrees, minutes;
    char direct;
    //bool to differentiate between lat and long
    bool LL;

public:
    //Constructors
    Angle(){ degrees = 0; minutes = 0; seconds = 0; direct = 'N';}
    Angle(double l, bool LL){ this->l = l; this->LL = LL; degrees = 0; minutes = 0; seconds = 0; direct = 'N';}
    Angle(int d, int m, double s, char dir){ degrees = d; minutes = m; seconds = s; direct = dir; l = 0;}
    
    //Mutators
    void setDegrees(int d){degrees = d;}
    void setMinutes(int m){minutes = m;}
    void setSeconds(double s){seconds = s;}
    void setDirect(char d){direct = d;}
    
    //Accessors
    int getDegrees(){return degrees;}
    int getMinutes(){return minutes;}
    double getSeconds(){return seconds;}
    char getDirect(){return direct;}
    
    //outputs formatted coordinates
    //degree symbol was not working in IDE so replaced with d
    void print(){
        std::cout << std::setprecision(4) << degrees << "d " << minutes <<"' " << seconds << "\" " << direct;
    }
    void convertToDMS(){
        //calculates the compass direction
        if(LL == true){
            if(l < 0){
                direct = 'S';
            }
            else{
                direct = 'N';
            }
        }
        else{
            if(l < 0){
                direct = 'W';
            }
            else{
                direct = 'E';
            }
        }
        //logic to split single lat or long double into degrees, minutes, seconds
        minutes = modf(l, &degrees);
        minutes = minutes * 60;
        seconds = modf(minutes, &minutes);
        seconds = seconds * 60;
    }
};
#endif