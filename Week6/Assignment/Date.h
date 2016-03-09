#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

static const string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
static const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date;
ostream &operator << (ostream &, const Date &);
istream &operator >> (istream &, Date &);



class Date{
    private:
        int month;
        int day;
        int year;
    public:
        
        Date(){
            month = 3;
            day = 6;
            year = 2016;
        }
        
        Date(int m, int d, int y){
            month = m;
            day = d;
            year = y;
        }
        
        Date(Date &d){
            day = d.day;
            month = d.month;
            year = d.year;
        }
        
        int getDay(){
            return day;
        }
        
        int getMonth(){
            return month;
        }
        
        int getYear(){
            return year;
        }
        
        friend ostream &operator << (ostream &strm, const Date &obj){
            strm << months[obj.month - 1] << " " << obj.day << ", " << obj.year;
            return strm;
        }
        
        friend istream &operator >> (istream &strm, Date &obj){
            cout << "\nEnter a Date";
            cout << "\n     the month: ";
            strm >> obj.month;
            if(obj.month > 12 || obj.month <= 0) exit(EXIT_FAILURE);
            cout << "     the day: ";
            strm >> obj.day;
            
            cout << "     the year: ";
            strm >> obj.year;
            if(obj.month > 12 || obj.month <= 0 || obj.day > days[obj.month - 1]) cout << "Not a valid date!";
            return strm;
        }
        
        Date operator++(){
            ++day;
            if(day > days[month - 1] && month != 12){ day = 1; ++month;}
            else if(day > days[month - 1]){ day = 1; month = 1; ++year;}
            return *this;
        }
        
        Date operator++(int){
            Date temp(*this);
            temp.day++;
            if(temp.day > days[temp.month - 1] && temp.month != 12){ temp.day = 1; temp.month++;}
            else if(day > days[temp.month - 1]){ temp.day = 1; temp.month = 1; temp.year++;}
            return temp;
        }
        
        Date operator--(){
            --day;
            if(day <= 0 && month != 1){ day = days[month - 2]; --month;}
            else if(day <= 0){ month = 12; day = days[month - 1];}
            return *this;
        }
        
        Date operator--(int){
            Date temp(*this);
            temp.day--;
            if(day <= 0 && month != 1){ day = days[month - 2]; month--;}
            else if(day <= 0){ month = 12; day = days[month - 1];}
            return temp;
        }
        
        int operator-(const Date &right){
            int totalDays1;
            int totalDays2;
            int diff;
            totalDays1 = day;
            totalDays2 = right.day;
            diff = year - right.year;
            if(diff < 0){
                totalDays2 += 365 * abs(diff); 
            }
            else{
                totalDays1 += 365*diff;
            }
            for(int i = 0; i <= (month - 1); i++){
                totalDays1 += days[i];
            }
            
            for(int i = 0; i <= right.month - 1; i++){
                totalDays2 += days[i];
            }
            return (totalDays1-totalDays2);
        }
};

#endif
