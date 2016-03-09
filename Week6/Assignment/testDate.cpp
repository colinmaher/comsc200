#include "Date.h"
#include <iostream>

using namespace std;

int main(){
    
     Date d1(12,25,2014);
     Date d2;
     Date d3(12,31,2014);
     Date d4(1,1,2015);
     
     cout << "Date d1(12, 25, 2014); ===> " << d1;
     cout << "\nDate d2; default today ===> " << d2;
     
     cout << "\nDecember 25, 2014 minus March 6, 2016 equals " << d1-d2;
     cout << "\n----------------------------------";
     cout << "\nNew d3 as " << d3;
     cout << "\n++d3   is " << ++d3;
     cout << "\nd3(stm)   " << d3;
     cout << "\nd3     is " << d3;
     cout << "\nd3++   is " << d3;
     cout << "\nd3(stm)   " << d3++;
     cout << "\nd3     is " << d3++;
     
     cout << "\n----------------------------------";
     cout << "\nSet d4 as " << d4;
     cout << "\n--d4   is " << --d4;
     cout << "\nd4(stm)   " << d4;
     cout << "\nd4     is " << d4;
     cout << "\nd4--   is " << d4;
     cout << "\nd4(stm)   " << d4--;
     cout << "\nd4     is " << d4--;
     
     
     cout << "\ntest a valid Date entry, 0th month to exit.";
     Date d5;
     cin >> d5;
     cout << "you entered: " << d5;
     cout << "\ntest a valid Date entry, 0th month to exit.";
     Date d6;
     cin >> d6;
     cout << "you entered: " << d6;
     cout << "\ntest a valid Date entry, 0th month to exit.";
     Date d7;
     cin >> d7;
     cout << "you entered: " << d7;
     cout << "\ntest a valid Date entry, 0th month to exit.";
     Date d8;
     cin >> d8;
     cout << "you entered: " << d8;
     
}