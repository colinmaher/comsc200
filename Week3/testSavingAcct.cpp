#include "SavingAcct.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    SavingAcct saver1(2000.0);
    SavingAcct saver2(3000.0);
    SavingAcct::modifyInterestRate(0.03);
    
    cout << "Initial balance: \n";
    cout << "Saver 1: "; 
    saver1.printBalance();
    cout << "       Saver 2: ";
    saver2.printBalance();
    cout << endl;
    
    saver1.calculateMonthlyBalance();
    saver2.calculateMonthlyBalance();
    cout << endl << "Balances after 1 month's interest applied at .03:";
    cout << endl << "Saver 1: ";
    saver1.printBalance();
    cout << "       Saver 2: ";
    saver2.printBalance();
    cout << endl;
    
    SavingAcct::modifyInterestRate(0.04);
    saver1.calculateMonthlyBalance();
    saver2.calculateMonthlyBalance();
    cout << endl << "Balances after 1 month's interest applied at .04:";
    cout << endl << "Saver 1: ";
    saver1.printBalance();
    cout << "       Saver 2: ";
    saver2.printBalance();
    cout << endl;
}