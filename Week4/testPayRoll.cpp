#include <iostream>
#include <string>
#include <sstream>
#include "PayRoll.h"
using namespace std;

int main(){
    string input;
    int n;
    double r,h;
    stringstream ss;
    PayRoll employees[10];
    
    do{
        ss.clear();
        ss.str("");
        cout << "Enter the number of employees: ";
        getline(cin,input);
        ss << input;
        ss >> n;
        if(ss.fail()) cout << input << " is not a number." << endl;
    }while(ss.fail());
    cout << "\nEnter the hours worked and pay rate for " << n << " employees: ";
    for(unsigned int i = 1; i <= n; i++){
        do{
            ss.clear();
            ss.str("");
            cout << "Employee #" << i << " pay rate: $ ";
            getline(cin, input);
            ss << input;
            ss >> r;
            if(ss.fail()) cout << input << " is not a valid rate." << endl;
            else employees[i-1].setRate(r);
        }while(ss.fail());
        do{
            ss.clear();
            ss.str("");
            cout << "Employee #" << i << " hours worked: ";
            getline(cin, input);
            ss << input;
            ss >> h;
            if(ss.fail()) cout << input << " is not a valid amount of hours." << endl;
            else employees[i-1].setHours(h);
        }while(ss.fail());
    }
    cout << "\nTotal Pay:" << endl;
    for(unsigned int i = 1; i <= n; i++){
        cout.precision(2);
        cout << "       Employee #" << i << ": " << fixed << employees[i-1].getTotal()<< endl; 
    }
}