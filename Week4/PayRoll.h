#ifndef PAYROLL_H
#define PAYROLL_H
#include <iostream>
using namespace std;
class PayRoll{
  private:
    double payRate;
    double hrs;
  public:
    //constructors
    PayRoll(){ payRate = 0; hrs = 0; };
    PayRoll(double r, double h){payRate = r; hrs = h;}
    
    //mutators
    void setHours(double h){ hrs = h; }
    void setRate(double r){ payRate = r; }
    
    //feature functions
    double getTotal(){ return hrs*payRate;}
};
#endif