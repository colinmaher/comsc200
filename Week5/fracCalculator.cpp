#include <iostream>
#include "frac.h"

using namespace std;


int main()
{
	// frac f1, f2, fans;
	Frac f1, f2, fans;
	char op;
 
	do {
		cout << "\nEnter fraction, operator, fraction";
		cout << "\nform 3/4 + 3/8 (or 0/1 + 0/1 to exit): ";
		f1.inputFrac();
		cin >> op;
		f2.inputFrac();
		
		cout << "You have entered: " << f1.getNum() << "/" << f1.getDen() 
			 << " " << op << " " << f2.getNum() << "/" << f2.getDen() << endl; 
		switch(op) {
			case '+':
				fans.setNum(f1.getNum() * f2.getDen() + f2.getNum() * f1.getDen());
				fans.setDen(f1.getDen() * f2.getDen());
				break;
			case '-':
				fans.setNum(f1.getNum() * f2.getDen() - f2.getNum() * f1.getDen());
				fans.setDen(f1.getDen() * f2.getDen());
				break;
			case '*':
				fans.setNum(f1.getNum() * f2.getNum());
				fans.setDen(f1.getDen() * f2.getDen());
				break;
			case '/':
				fans.setNum(f1.getNum() * f2.getDen());
				fans.setDen(f1.getDen() * f1.getNum());
				break;
			default:
				cout << "No such operator";
		}  //end switch
		
		fans.lowerTerms();
		
		cout << fans.getNum() << "/" << fans.getDen() << endl;
	} while( f1.getNum() != 0 || f2.getNum() != 0 );
	cout << endl;
	return 0;
}