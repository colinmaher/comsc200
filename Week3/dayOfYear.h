#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <iostream>
#include <string>
using namespace std;
class DayOfYear{
    private:
        static string months[]; 
        static int days[];
        int m = 0, d, input;
    public:
        //constructors
        DayOfYear();
        DayOfYear(int d){ this->input = d; };
        
        //function to get specific month and day
        void monthDay(){
           while(days[m] < input){
               m++;
           }
           d = input - days[m - 1];
        };
        //output function
        void print(){
            std::cout << months[m] << " " << d;
        }
};
string DayOfYear::months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int DayOfYear::days[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365}; 
#endif