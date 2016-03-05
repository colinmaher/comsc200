#include "Frac.h"
#include <iostream>

using namespace std;

int main(){
    Frac x(3,4);
    cout << "\nFrac x(3,4) created x as " << x << endl;
    Frac y(2,3);
    cout << "\nFrac y(2,3) created y as " << y << endl;
    
    Frac z(0,0);
    z = x;
    cout << "\nFrac z = x; z is " << z << endl;
    
    Frac zz(y);
    cout << "\nCopy Constructor:";
    cout << "\nFrac zz(y) created zz as " << zz << endl;
    
    zz = x + y;
    cout << "\nOverloaded Addition Operator + :";
    cout << "\nx + z = " << zz << endl;
    
    zz = x - y;
    cout << "\nOverloaded Subtraction Operator - :";
    cout << "\nx - y = " << zz << endl;
    
    zz = x * y;
    cout << "\nOverloaded Multiplication Operator * :";
    cout << "\nx * y = " << zz << endl;
    
    zz = x / y;
    cout << "\nOverloaded Division Operator / :";
    cout << "\nx / y = " << zz << endl;
    
    cout << "\nOverloaded Greater Than Operator > :";
    cout << "\nThe prediction (3/4 > 2/3) is "; 
    if(x>y) cout<< "TRUE";
    else cout << "FALSE" << endl;
    
    cout << "\nOverloaded Less Than Operator < :";
    cout << "\nThe prediction (3/4 < 2/3) is "; 
    if(x<y) cout<< "TRUE";
    else cout << "FALSE"  << endl;
    
    //cout << "z = " << z << endl << endl;
    cout << "\nOverloaded pre ++ ()";
    cout << "\nz is " << z;
    cout << "\n++z is " << ++z;
    cout << "\nz is " << z << endl;

    cout << "\nOverloaded post ++ (int)";
    cout << "\nz is " << z;
    cout << "\nz++ is " << z++;
    cout << "\nz is " << z << endl;
         
    cout << "\nOverloaded pre -- ()";
    cout << "\nz is " << z;
    cout << "\n--z is " << --z;
    cout << "\nz is " << z << endl;
         
    cout << "\nOverloaded post -- (int)";
    cout << "\nz is " << z;
    cout << "\nz-- is " << z--;
    cout << "\nz is " << z << endl;
    
}