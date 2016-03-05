#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays{
    private:
        double hours;
        double days;
    public:
        NumDays(double h = 0){
            hours = h;
            days = h/8;
        }
        
        NumDays(NumDays &right){
            hours = right.hours;
            days = hours/8;
        }
        
        //setters
        void setHour(double h){
            hours = h; days = h/8;
        }
        
        //getters
        double getHours(){
            return hours;
        }
        
        double getDays(){
            return hours/8;
        }
        
        NumDays operator + (NumDays &right){
            NumDays sum;
            sum.setHour(hours+right.getHours());
            return sum;
        }
        
        NumDays operator - (NumDays &right){
            NumDays dif;
            dif.setHour(hours-right.getHours());
            return dif;
        }
        
        NumDays operator ++ (int){
            NumDays temp(*this);
            hours++;
            days = hours/8;
            return temp;
        }
        
        NumDays operator ++ (){
            ++hours;
            days = hours/8;
            return *this;
        }
        
        NumDays operator -- (int){
            NumDays temp(*this);
            hours--;
            days = hours/8;
            return temp;
        }
        
        NumDays operator -- (){
            --hours;
            days = hours/8;
            return *this;
        }
};
#endif