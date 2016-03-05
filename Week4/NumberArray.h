#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
#include <array>

class NumberArray{
  private:
    float *array;
  public:
    //constructors & destructors
    NumberArray(int n){
        float * ptr = nullptr;
        ptr = new float[n];
        array = ptr;
        delete [] ptr;
    };
    ~NumberArray(){
        
    };
    
    void insertElement(float n){
        int i = 0;
        while(array[i] != 0){
            i++;
        }
        array[i] = n;
    };
    
    float getValue(int n){
        return array[n];
    };
    float getMax(){
        float max = array[0];
        for(auto i = array.begin()+1; i != array.end(); ++i){
            if(*i > max)
                max = *i;
        }
    };
    float getMin(){};
    float getAverage(){};
};
#endif
