#include <iostream>

using namespace std;

template <class T>
T minimum(T var1, T var2){
    if(var1 < var2) return var1;
    return var2;
}
template <class T>
T maximum(T var1, T var2){
    if(var1 > var2) return var1;
    return var2;
}
template <class T>
T absolute(T var){
    if(var < 0) return -var;
    return var;
}
int main(){
    int num1 = -5;
    int num2 = 3;
    
    cout << "Minimum of -5 and 3 is: " << minimum(num1, num2);
    cout << "\nMaximum of -5 and 3 is: " << maximum(num1, num2);
    cout << "\nAbsolute value of -5 is: " << absolute(num1);
    cout << "\nAbsolute value of 3 is: " << absolute(num2);
    
    double num3 = -5.5;
	double num4 = 3.5;
	cout << "\nminimum of " << num3 << " and " << num4 
		<< " is:  " << minimum(num3, num4) << endl;
	cout << "maximum of " << num3 << " and " << num4 
		<< " is:  " << maximum(num3, num4) << endl;
	cout << "Absolute value of " << num3
		<< " is: " << absolute(num3) << endl;
	cout << "Absolute value of " << num4
		<< " is: " << absolute(num4) << endl;
		
	string s1 = "hello";
	string s2 = "hi";
	cout << "minimum of " << s1 << " and " << s2 
		<< " is: " << minimum(s1, s2) << endl;
	cout << "maximum of " << s1 << " and " << s2 
		<< " is: " << maximum(s1, s2) << endl;

}