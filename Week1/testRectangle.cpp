///***********************************************************************************

/// Description: This program will calculate the area of a rectangle.

/// Properly balanced parentheses.

/// Author: Colin Maher

/// COMSC 200 Section 8283

/// Date: February 11, 2016

/// Status : Complete 

///***********************************************************************************
#include "rectangle.h"

#include <iostream>
using namespace std;
int main(){
    Rectangle<double> r;
    double length, width;
    
    cout << "This program will calculate the area of a rectangle.\n";
    cout << "What is the width? : ";
    cin >> width;
    r.setWidth(width);
    cout << "What is the length? : ";
    cin >> length;
    r.setLength(length);
    cout << "Here is the rectangle's data: \nWidth: " << r.getWidth() << "\nLength: " << r.getLength() << "\nArea: " << r.getArea();
}

