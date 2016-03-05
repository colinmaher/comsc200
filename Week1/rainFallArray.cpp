#include <iostream>

using namespace std;

const int SIZE = 12;

//sums elements of array
double total(double arr[]){
    double sum = 0;
    for(unsigned int i=0; i <= SIZE; i++){
        sum += arr[i];
    }
    return sum;
}
//returns index of smallest value
int minimum(double arr[]){
    int min = 0;
    double temp = arr[0];
    for(unsigned int i=1; i < SIZE; i++){
        if(arr[i] <= temp){
            temp = arr[i];
            min = i;
        }
    }
    return min;
}
//returns index of largest value
int maximum(double arr[]){
    int max = 0;
    double temp = arr[0];
    for(unsigned int i=1; i <= SIZE; i++){
        if(arr[i] > temp){
            max = i;
        }
    }
    return max;
}
int main(){
    
    double arr[SIZE];
    double input = 0;
    double sum;
    int min, max;
    
    for(unsigned int i=0; i < SIZE; i++){
        cout << "Enter the rainfall (in inches) for month #" << i+1 << ": ";
        cin >> input;
        
        while(input < 0){
            cout << "Rainfall must be greater than 0.\nPlease re-enter: ";
            cin >> input;
        }
        arr[i] = input;
    }
    
    sum = total(arr);
    max = maximum(arr);
    min = minimum(arr);
    
    cout << "\nThe total rainfall for the year is " << sum << " inches.";
    cout << "\nThe average rainfall for the year is " << sum/SIZE << " inches.";
    cout << "\nThe largest amount of rainfall was " << arr[max] << " inches in month " << max;
    cout << "\nThe smallest amount of rainfall was " << arr[min] << " inches in month " << min;
}