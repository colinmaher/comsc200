#include "Frac.h"
#include <iostream>

using namespace std;

int main(){
    Frac f(3,8);
    cout << "Frac f(3,8) is " << f;
    //regular friend
    cout << "\nregular friend not from class: ";
    showFrac(f);
    
    //friend from a clan but not a friend in house 
    GoodFriend good;
    cout << "\nfriend method from a class: ";
    good.showFrac(f);
    
    //friend class
    BestFriend best;
    cout << "\nfriend class method: ";
    best.showFrac(f);
    
    
}