#include <iostream>
#include "NumDays.h"

using namespace std;

int main(){
    NumDays one(25), two(15), three, four;
    cout << "one(25): " << one.getDays()
         << "\ntwo(15): " << two.getDays();
         
    three = one + two;
    cout << "\nthree = one + two; three is " << three.getDays();
    three = one - two;
    cout << "\nthree = one - two; three is " << three.getDays();
    four = three++;
    cout << "\nFour = Three++: " << four.getDays();
    four = ++three;
    cout << "\nFour = ++Three: " << four.getDays();
    four = three--;
    cout << "\nFour = Three--: " << four.getDays();
    four = --three;
    cout << "\nFour = --Three: " << four.getDays();
    
}