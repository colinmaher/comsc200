#include <iostream>
#include <cstdlib> // exit()

#include "Frac.h"

using namespace std;

int main(){
    long n, d;
    do{
        cout << "\nWhen denominator is entered as zero, program will exit!";
        cout << "\nEnter the first frac number in n/d: ";
        cin >> n >> d;
        if(d == 0){ cout << "\nError denominator cannot be 0."; exit(1);}
        
        Frac x(n,d);
        cout << "First frac x is: " << x;
        
        cout << "\nEnter the second Frac number in n/d: ";
        cin >> n >> d;
        if( d == 0){ cout << "\nError denominator cannot be 0.";  exit(1);}
        
        Frac y(n,d);
        cout << "Second frac y is: " << y;
        
        Frac z = x + y;
        cout << "\nx + y = " << z;
    }while(d != 0);
}