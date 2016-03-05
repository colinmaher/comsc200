#ifndef FRAC_H
#define FRAC_H
#include <iostream>
using namespace std;
class Frac;
ostream &operator<< (ostream &, const Frac &);

class GoodFriend{
    public:
        void showFrac(Frac &);
};
class BestFriend{
    public:
        void showFrac(Frac &);
};


class Frac{
  private:
    long num;
    long den;
    //private helpers
    long gcd(long a, long b){
        long r;
        r = a % b;
        while(r != 0){
            a = b;
            b = r;
            r = a % b;
        }
    return b;
    }
    
    void lowerTerms(){
        long g = gcd(num, den);
        num = num/g;
        den = den/g;
    }
    
  public:
    // constructors
    Frac(){ den = 1;}
    Frac(long n, long d){ num = n; den = d;}
    Frac(const Frac &obj){ *this = obj;} // *dereference this and assign new object to obj 
    
    // outputs object as its numerator over its denominator
    friend ostream &operator << ( ostream &strm, const Frac &right){
        strm << right.num << "/" << right.den;
        return strm;
    }
    
    // assignment operator (default)
    void operator= (const Frac &right){
        num = right.num;
        den = right.den;
    }
    // math operators
    // num1/den1 + num2/den2 =
    // ((num1*den2) + (num2*den1))/(den1*den2)
    Frac operator+ (const Frac &right){
        Frac temp;
        temp.num = ((num * right.den) + (den * right.num));
        temp.den = (den * right.den);
        temp.lowerTerms();
        return temp;
    }
    
    Frac operator- (const Frac &right){
        Frac temp;
        temp.num = ((num * right.den) - (den * right.num));
        temp.den = (den * right.den);
        temp.lowerTerms();
        return temp;
    }
    
    Frac operator* (const Frac &right){
        Frac temp;
        temp.num = (num*right.num);
        temp.den = (den*right.den);
        temp.lowerTerms();
        return temp;
    }
    
    Frac operator/ (const Frac &right){
        Frac temp;
        temp.num = (num*right.den);
        temp.den = (den*right.num);
        temp.lowerTerms();
        return temp;
    }
    // comparison operators
    // greater than
    // (num1*den2) - (num2*den1) > 0
    // (num1*den2) > (num2*den1)
    bool operator>(const Frac &right){
        return (num*right.den) > (right.num*den);
    }
    
    bool operator<(const Frac &right){
        return (num*right.den) < (right.num*den);
    }
    
    bool operator==(const Frac &right){
        return ((num == right.num) && (den == right.den));
    }
    
    // preincrement and postincrement operators
    // pre ++ 3/4 return 4/4 the value after will be 4/4
    // post ++ 3/4 return 3/4 the value after will be 4/4
    // (int) signifies post nothing signifies pre
    Frac operator++(){
        ++num;
        return *this;
    }
    Frac operator++(int){
        Frac copy = *this;
        ++num;
        return copy;
    }
    Frac operator--(){
        --num;
        return *this;
    }
    Frac operator--(int){
        Frac copy = *this;
        --num;
        return copy;
    }
    //friend method
    friend void showFrac(Frac&);
    
    //friend class method
    friend void GoodFriend::showFrac(Frac &);
    
    //BestFriend class
    friend class BestFriend;
};
void showFrac(Frac &f){
    cout << f.num << "/" << f.den << " ";
}


//GoodFriend showFrac() definition
void GoodFriend::showFrac(Frac &f){
    cout << f.num << "/" << f.den << " ";
}

//BestFriend showFrac() definition
void BestFriend::showFrac(Frac &f){
    cout << f.num << "/" << f.den << " ";
}
#endif