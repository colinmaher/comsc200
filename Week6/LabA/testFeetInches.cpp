#include <iostream>
#include "FeetInches.h"
using namespace std;

int main(){
    while(true){
        FeetInches f1, f2;
        cout << "Enter the first FeetInches: (0,0 to exit) ";
        cin >> f1;
        if(f1.getFeet() == 0 || f1.getInches() == 0) break;
        cout << "You have created first as " << f1;
        
        cout << "\nEnter the second FeetInches: (0,0 to exit) ";
        cin >> f2;
        cout << "You have created second as " << f2;
        
        FeetInches f3(f2);
        cout << "\nCopy constructed the third FeetInches: " << f3;
        
        cout << "\n--->Overloaded Addition Operator (+):";
        f3 = f1 + f2;
        cout << f1 << " + " << f2 << " = " << f3;
        
        cout << "\n--->Overloaded Subtraction Operator (-):";
        f3 = f1 - f2;
        cout << f1 << " - " << f2 << " = " << f3;
        
        cout << "\n--->Overloaded Greater Than Operator (>):";
        cout << "Is " << f1 << " > " << f2 << "?";
        if(f1 > f2) cout << "\nYes!";
        else cout << "\nNo!";
        
        cout << "\n--->Overloaded Post ++ and -- Operators:";
        cout << "\nStart First " << f1;
        cout << "\nPost ++ " << f1++;
        cout << "\nPost -- " << f1--;
        
        cout << "\n--->Overloaded Pre ++ and -- Operators:";
        cout << "\nStart Second " << f2;
        cout << "\nPost ++ " << ++f2;
        cout << "\nPost -- " << --f1 << endl;
    }
}