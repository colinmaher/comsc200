#ifndef LANDTRACT_H
#define LANDTRACT_H
#include <iostream>
#include "FeetInches.h"
using namespace std;
class LandTract{
    private:
        FeetInches width;
        FeetInches length;
    public:
        //constructor
        LandTract(){
            FeetInches one;
            FeetInches two;
            width = one;
            length = two;
        }
        
        LandTract(FeetInches w, FeetInches l){
            width = w;
            length = l;
        }
        
        //getters and setters
        FeetInches getWidth(){ return width;}
        FeetInches getLength(){ return length;}
        void setWidth(FeetInches w){ width = w;}
        void setLength(FeetInches l){ length = l;}
        //calculated area
        
        double getArea(){
            
            double tempWidth = width;
            double tempLength = length;
            double area = tempWidth * tempLength;
            return area;
        }
};
#endif