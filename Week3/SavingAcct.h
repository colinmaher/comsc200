#ifndef SAVINGACCT_H
#define SAVINGACCT_H

#include <iostream>
#include <iomanip>



class SavingAcct{
    private:
        double savingsBalance;
        static double annualInterestRate;
    public:
        SavingAcct(){}
        SavingAcct(double b){ savingsBalance = (b>= 0.0 ? b : 0.0); }
        void calculateMonthlyBalance(){savingsBalance += savingsBalance * (annualInterestRate/12.0); }
        static void modifyInterestRate(double r){annualInterestRate = (r >= 0.0 && r <= 1.0 ? r: annualInterestRate); }
        void printBalance(){ std::cout << std::fixed << '$' << std::setprecision(2) << savingsBalance; }
    
};
double SavingAcct::annualInterestRate = 0.01;
#endif