#include "dayOfYear.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    int d;
    
    while(d != -1){
        cout << "Enter a whole number between 1 and 365(-1 to quit): ";
        cin >> d;
        while(d > 365){
            d -= 365;
        }
        if(d != -1){
            DayOfYear day(d);
            day.monthDay();
            day.print();
            cout << endl;
        }
    }
}