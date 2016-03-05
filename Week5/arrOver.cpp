#include <iostream>
#include <cstdlib> // exit()
using namespace std;

class SafeArray
{
 private:
    int *array;
    int limitL, limitH;

 public:
 //note: return by reference
    SafeArray(int s, int l, int h){
        array = new int[s];
        limitL = l;
        if(h-1>s) limitH = s-1;
        else limitH = h;
    }
    ~SafeArray(){
        delete [] array;
    }
    int& operator [](int n) {
        if(n == -1){ cout << "\nProgram exit!"; exit(1);}
        else if( n < limitL || n > limitH){ 
            cout << "\nIndex out of bounds"; exit(1);
        }
        return array[n];
    }
    void display(){
        for(int j = limitL; j <= limitH; j++){
            cout << "\nElement " << j << " is " << array[j];
        }
    }
};

int main(){
    int s, low, high, loc, input;
    //int size = high - low +1;
    do{
        cout << "Enter size of array to create: ";
        cin >> s;
    }while(s < 0);
    
    while(loc != -1){
        cout << "\nEnter lower and upper bounds: ";
        cin >> low;
        cin >> high;
        
        SafeArray sa1(s,low,high);
        for(int j=low; j<high+1; j++) //insert elements
            sa1[j] = j*10; //*left* side of equal sign
        sa1.display();
        do{
            cout << "\nEnter a location between " << low << " and " << high << " to modify (-1 to exit) : ";
            cin >> loc;
        }while(loc > high || loc < low && loc != -1);
        
            cout << "Change " <<  sa1[loc] << " to what? ";
            cin >> input;
            sa1[loc] = input;
            sa1.display();
        
    }
    return 0;
}