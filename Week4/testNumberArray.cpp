#include "NumberArray.h"
#include <iostream>
#include <array>

using namespace std;

int main(){
    int num;
    float input;
    cout << "How many numbers do you want to store? ";
    cin >> num;
    NumberArray a(num);
    for(int i = 0; i <= num-1; ++i){
        cout << "Enter a float number: ";
        cin >> input;
        a.insertElement(input);
    }
    cout << "Here are the values you entered: \n";
    for(int i = 0; i <= num-1; ++i){
        cout << "Number " << i+1 << ": ";
        cout << a.getValue(i) << endl;
    }
}